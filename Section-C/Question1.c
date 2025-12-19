 #include <stdio.h>
#define SIZE 5
int queue[SIZE];
int front = -1, rear = -1;
void enqueue(int x) {
if (rear == SIZE - 1)
 printf("Queue Overflow\n");
else {
 if (front == -1) front = 0;
 queue[++rear] = x;
 }}
void dequeue() {
if (front == -1 || front > rear)
printf("Queue Underflow\n");
else
front++;
}void display() {
for (int i = front; i <= rear; i++)
printf("%d ", queue[i]);
}int main() {
enqueue(10);
enqueue(20);
dequeue();
display();
return 0;}

 
 
 




















