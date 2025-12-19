#include <stdio.h>
#include <string.h>
int binarySearch(char arr[][20], int n, char key[]) {
int low = 0, high = n - 1, mid, cmp;
while (low <= high) {
mid = (low + high) / 2;
cmp = strcmp(arr[mid], key);
if (cmp == 0)
return mid;
else if (cmp < 0)
low = mid + 1;
else
high = mid - 1;
}
return -1;
}
int main() {
char arr[][20] = {"Apple", "Banana", "Cherry", "Mango", "Orange"};
int n = 5;
char key[] = "Mango"
int result = binarySearch(arr, n, key);
if (result != -1)
printf("String found at index %d", result);
else
printf("String not found");
return 0;
}
