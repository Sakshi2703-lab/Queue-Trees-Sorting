#include <stdio.h> 
#include <stdlib.h> 
struct Node { 
    int data; 
    struct Node *next; 
}; 
struct Node *head = NULL; 
/* Insert at end */ 
 
void insert(int x) 
 { 
    struct Node *n = (struct Node *)malloc(sizeof(struct Node)); 
    n->data = x; 
if (head == NULL) 
 { 
        head = n; 
        n->next = head; 
        return; 
    } 
  struct Node *t = head; 
    while (t->next != head) 
        t = t->next; 
 t->next = n; 
   
 
   
 
    n->next = head; 
} 
/* Display */ 
 
 
void display() 
 { 
    if (head == NULL) return; 
   struct Node *t = head; 
    do 
 { 
        printf("%d -> ", t->data); 
        t = t->next; 
    } 
 while (t != head); 
    printf("(back to head)\n"); 
} 
 
int main() { 
  
   insert(10); 
    insert(20); 
    insert(30); 
   display(); 
 
return 0; 
} 
Output: 
