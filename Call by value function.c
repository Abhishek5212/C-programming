#include <stdio.h>
void swap(int x, int y);
 
int main () 
{
   int m = 50;
   int n = 670;
 
   printf("Before swap, value of m : %d\n", n );
   printf("Before swap, value of m : %d\n", n );
 
   /* calling a function to swap the values */
   swap(m, n);
 
   printf("After swap, value of m : %d\n", m );
   printf("After swap, value of n : %d\n", n );
 
   return 0;
}
void swap(int x, int y) {

   int temp;

   temp = x; /* save the value of x */
   x = y;    /* put y into x */
   y = temp; /* put temp into y */
  
   return;
}
