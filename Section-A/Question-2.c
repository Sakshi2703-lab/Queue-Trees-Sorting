#include <stdio.h> 
#include <stdlib.h> 
struct Node {  
 int data; 
    struct Node *next; 
}; 
struct Node *head = NULL; 
void insert(int x) { 
    struct Node *n = (struct Node *)malloc(sizeof(struct Node)); 
    n->data = x; 
    n->next = NULL; 
if (head == NULL)  
{ 
 head = n; 
        return; 
    } 
struct Node *t = head; 
    while (t->next != NULL) 
        t = t->next; 
 t->next = n;} 
void display() { 
    struct Node *t = head; 
    while (t != NULL) {printf("%d -> ", t->data); 
        t = t->next; 
    }  
 printf("NULL\n"); 
} 
 
int main() { 
insert(10); 
insert(20); 
insert(30); 
display(); 
return 0;}
