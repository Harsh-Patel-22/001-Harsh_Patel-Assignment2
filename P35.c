#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *myNumbers = (int *)malloc(5 * sizeof(int)), *ptr;
    int largest, i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &myNumbers[i]);
    }
    ptr = &myNumbers[0];
    largest = *ptr;
    for (i = 0; i < 5; i++)
    {
        if (*ptr > largest)
        {
            largest = *ptr;
        }
        ptr++;
    }
    printf("\n%d is the largest element!", largest);
    return 0;
}