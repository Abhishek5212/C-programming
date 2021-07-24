#include<stdio.h>
int main()
{
 int j=0;
 int i=0; 
 printf("while loop");
 while(i<5)
 {
   printf("The values are %d \n",i);
   i++;
 }
 do
 {
  printf("do while loop \n");
  printf("The values are %d \n",j);
  j++;
 }while(j<4);
return 0;
}
