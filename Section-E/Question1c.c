#include <stdio.h>
int main() {
int a[] = {9, 5, 1, 4, 3}, n = 5, i, j, key;
for(i=1;i<n;i++) {
key = a[i];
j = i-1;
while(j>=0 && a[j] > key) {
a[j+1] = a[j];
j--;
}
a[j+1] = key;
}
for(i=0;i<n;i++) printf("%d ", a[i]);
return 0;
}
