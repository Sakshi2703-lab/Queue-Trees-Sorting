#include <stdio.h>
#include <string.h>
int linearSearch(char arr[][20], int n, char key[]) {
for (int i = 0; i < n; i++) {
if (strcmp(arr[i], key) == 0)
return i;
}
return -1;
}
int main() {
char arr[][20] = {"Apple", "Banana", "Cherry", "Mango", "Orange"};
int n = 5;
char key[] = "Cherry";
int result = linearSearch(arr, n, key);
if (result != -1)
printf("String found at index %d", result);
else
printf("String not found");
return 0;
}
