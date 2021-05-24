#include <stdio.h>
int main()
{
    int a = 5, b = 4;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d <= %d is %d \n", a, b, a <= b);

    return 0;
}
