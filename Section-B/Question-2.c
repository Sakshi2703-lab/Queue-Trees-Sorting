#include <stdio.h> 
#include <stdlib.h> 
struct Node {int data; 
    struct Node *next; 
}; 
struct Node *top = NULL; 
void push(int x) 
 { 
    struct Node *n = (struct Node *)malloc(sizeof(struct Node)); 
    if (!n) return; 
    n->data = x; 
    n->next = top; 
    top = n; 
} 
void pop()  
{ 
 if (top == NULL) 
 return; 
    struct Node *t = top; 
    top = top->next; 
    free(t); 
} 
void display() 
 { 
    for (struct Node *t = top; t; t = t->next) 
        printf("%d ", t->data); 
    printf("\n"); 
} 
 
int main()  
{ 
push(10); push(20); push(30); 
display(); 
pop(); 
display(); 
return 0; 
} 
Output:            
