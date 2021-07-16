#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // true if number is less than 0
    if (number < 10) {
        printf("You entered %d.\n", number);
    }
    printf("The if statement is correct.");
    return 0;
}
