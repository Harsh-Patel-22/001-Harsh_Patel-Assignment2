/*
'''
@author: 001 Harsh Patel
@description: Program No. 13 - Program to remove repeating numbers from an array
'''
*/

// bug

#include <stdio.h>

int main()
{
    int used_length = 5;
    int array[10], i, j, k, delete_key;

    for (i = 0; i < used_length; i++)
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nArray before removing duplicate values is: ");
    for (i = 0; i < used_length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (i = 0; i < used_length - 1; i++)
    {
        delete_key = array[i];
        for (j = i + 1; j < used_length; j++)
        {
            if (delete_key == array[j])
            {
                for (k = j; k < used_length; k++)
                {
                    array[k] = array[k + 1];
                }
                used_length--;
            }
        }
    }

    printf("Array after removing duplicate values is: ");
    for (i = 0; i < used_length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

/*
Enter the value for 1: 1
Enter the value for 2: 2
Enter the value for 3: 1
Enter the value for 4: 2
Enter the value for 5: 1

Array before removing duplicate values is: 1 2 1 2 1
Array after removing duplicate values is: 1 2
*/