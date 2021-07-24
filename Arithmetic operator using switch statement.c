#include<stdio.h>
int main()
{
  int n,m,t; 
  char c;
  printf("Enter two numbers and operator :\n");
  scanf("%d %d %c", &n, &m, &c);
 
  switch(c)
  {
     case '+' : printf("Addition is : %d", n+m);
                break;
     case '-' : printf("Substraction is %d", n-m);
                break;
     case '*' : printf("Multiplication is %d", n*m);
                break;
     case '/' : printf("Division is %f", (float)n/m);
                break;
     default  : printf("Not valid");
  }
  getch();
  return 0;
}
