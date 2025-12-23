#include <stdio.h> 
#define MAX 5 
struct Node 
{ 
int data; 
int next;}; 
struct Node list[MAX]; 
int head = -1,  
freeNode = 0; 
void init() { 
for (int i = 0; i < MAX - 1; i++) 
list[i].next = i + 1; 
list[MAX - 1].next = -1; 
} 
void insert(int x)  
{ 
if (freeNode == -1)  
return; 
int newNode = freeNode; 
freeNode = list[freeNode].next; 
list[newNode].data = x; 
list[newNode].next = head; 
head = newNode; 
} 
void display() 
{   
int t = head; 
while (t != -1) 
{ 
printf("%d -> ", list[t].data); 
t = list[t].next; 
}printf("NULL\n"); 
} 
int main() 
{ 
} 
init(); 
insert(10); 
insert(20); 
insert(30); 
display(); 
return 0;
