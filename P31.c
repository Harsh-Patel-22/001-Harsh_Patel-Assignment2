/*
'''
@author: 001 Harsh Patel
@description: Program No. 31 - Program to sort an array using Pointer
'''
*/

#include <stdio.h>

int main()
{
    int numbers[] = {22, 3, 1, 99, 56};
    int n = 5, i, j, temp;
    int *ptr;

    printf("The unsorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            ptr = &numbers[j];
            if (*ptr > *(ptr + 1))
            {
                temp = *ptr;
                *ptr = *(ptr + 1);
                *(ptr + 1) = temp;
            }
        }
    }
    printf("\nThe sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}

/*
Enter the value for n: 6
Factorial for 6 = 720
*/