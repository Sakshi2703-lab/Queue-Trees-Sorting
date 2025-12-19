#include <stdio.h>
void quick(int a[], int low, int high) {
if(low < high) {
int p = a[high], i = low-1, j, temp;
for(j=low;j<high;j++)
if(a[j] < p) {
I++;
temp=a[i]; a[i]=a[j]; a[j]=temp;
}
temp=a[i+1]; a[i+1]=a[high]; a[high]=temp;
quick(a, low, i);
quick(a, i+2, high);
}}
int main() {
int a[] = {10, 7, 8, 9, 1, 5}, n=6, i;
quick(a, 0, n-1);
for(i=0;i<n;i++) printf("%d ", a[i]);
return 0;
}
