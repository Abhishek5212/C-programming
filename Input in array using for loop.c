#include  <stdio.h>
int main()
{
    //Variable Declaration
    int numbers[ARRAY_SIZE], i;

	// Read Numbers Using scanf and for Loop.
	printf("Reading Array with Position : \n");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
		printf("Enter the Number : %d  : ", (i+1));
        scanf("%d", &numbers[i]);
    }

	// Print Numbers Using for Loop.
    printf("\nPrinting Numbers Using for Loop: \n");
    for (i = 0; i < ARRAY_SIZE; ++i)
    {
        printf("%d\n", numbers[i]);
    }
    
    return 0;
}
