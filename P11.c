/*
'''
@author: 001 Harsh Patel
@description: Program No. 11 - Program to sort an array in:
                             a. Ascending Order.
                             b. Descending Order.
'''
*/

#include <stdio.h>

int main()
{
    int array[5], i, j, temp;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nArray before sorting is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (i = 0; i < 5 - 1; i++) // ascending order sort
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("\nArray in ascending order is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");


    for (i = 0; i < 5 - 1; i++) // descending order sort
    {
        for (j = 0; j < 5 - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("\nArray in descending order is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

/*
Enter the value for 1: 22
Enter the value for 2: 45
Enter the value for 3: 1
Enter the value for 4: 8
Enter the value for 5: 100

Array before sorting is: 22 45 1 8 100 

Array in ascending order is: 1 8 22 45 100 

Array in descending order is: 100 45 22 8 1
*/