#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node {
char data[20];
struct Node* next;
};
struct Node* createNode(char value[]) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
strcpy(newNode->data, value);
newNode->next = NULL;
return newNode;
}
struct Node* getMiddle(struct Node* start, struct Node* end) {
struct Node *slow = start, *fast = start;
while (fast != end && fast->next != end) {
fast = fast->next->next;
slow = slow->next;
}
return slow;
}
struct Node* binarySearch(struct Node* head, char key[]) {
struct Node *start = head, *end = NULL;
while (start != end) {
struct Node* mid = getMiddle(start, end);
int cmp = strcmp(mid->data, key);
if (cmp == 0)
return mid;
else if (cmp < 0)
start = mid->next;
else
end = mid;
}
return NULL;
}
int main() {
struct Node* head = createNode("Apple");
head->next = createNode("Banana");
head->next->next = createNode("Cherry");
head->next->next->next = createNode("Mango");
head->next->next->next->next = createNode("Orange");
char key[] = "Mango";
struct Node* result = binarySearch(head, key);
if (result != NULL)
printf("String found: %s", result->data);
else
printf("String not found");
return 0;
}
