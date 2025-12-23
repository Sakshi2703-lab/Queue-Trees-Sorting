#include <stdio.h> 
void toh(int n, char S, char A, char D)  
{ 
    if (n == 1) 
 { 
        printf("Move disk 1 from %c to %c\n", S, D); 
         
return;  
  } 
    
 
 toh(n - 1, S, D, A); 
    printf("Move disk %d from %c to %c\n", n, S, D); 
    toh(n - 1, A, S, D); 
} 
 
 
int main() 
 { 
    int n = 3; 
    toh(n, 'A', 'B', 'C'); 
    
 return 0; 
}
