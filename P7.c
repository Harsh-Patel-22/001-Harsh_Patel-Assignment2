#include <stdio.h>

int main()
{
    int sizeof1 = 3, sizeof2 = 2, i;
    int total_size = sizeof1 + sizeof2;
    int arr1[sizeof1], arr2[sizeof2], combined[total_size];

    printf("Enter values for array 1:\n");
    for (i = 0; i < sizeof1; i++)
    {
        printf("For Index %d: ", i);
        scanf("%d", &arr1[i]);
        combined[i] = arr1[i];
    }

    printf("\nEnter values for array 2:\n");
    for (i = 0; i < sizeof2; i++)
    {
        printf("For Index %d: ", i);
        scanf("%d", &arr2[i]);
        combined[sizeof1 + i] = arr2[i];
    }
    printf("\nCombined Array:\n");
    for (i = 0; i < total_size; i++)
    {
        printf("Value at index %d is: %d\n", i, combined[i]);
    }

    return 0;
}