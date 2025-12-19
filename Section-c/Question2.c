#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node struct node *front = NULL, *rear = NULL;
void enqueue(int x) {
struct node *temp = (struct node*)malloc(sizeof(struct node));
temp->data = x;
temp->next = NULL;
if (rear == NULL)
front = rear = temp;
else {
rear->next = temp;
rear = temp;
}}
void dequeue() {
if (front == NULL)
printf("Queue Underflow\n");
else {
 struct node *temp = front;
 front = front->next;
 free(temp);
 if (front == NULL)
 rear = NULL;
}}
void display() {
struct node *temp = front;
while (temp != NULL) {
printf("%d ", temp->data);
temp = temp->next;
}}
int main() {
enqueue(10);
enqueue(20);
enqueue(30);
dequeue();
display();
return };
