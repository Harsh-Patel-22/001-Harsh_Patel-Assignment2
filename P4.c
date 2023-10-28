/*
'''
@author: 001 Harsh Patel
@description: Program No. 4 - Write a program in C to copy the elements of one array into another array
'''
*/

#include <stdio.h>

int main()
{
    int array_source[5], array_target[5], i;

    for (i = 0; i < 5; i++) // loop to take input values
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &array_source[i]);
    }

    for (i = 0; i < 5; i++) // loop to copy the values
    {
        array_target[i] = array_source[i];
    }

    printf("\n\nPrinting values from target array:\n");

    for (i = 0; i < 5; i++) // loop for printing values from target array
    {
        printf("Enter the value for %d is: %d\n", i + 1, array_target[i]);
    }

    return 0;
}

/*
Enter the value for 1: 1
Enter the value for 2: 2
Enter the value for 3: 3
Enter the value for 4: 4
Enter the value for 5: 5


Printing values from target array:
Enter the value for 1 is: 1
Enter the value for 2 is: 2
Enter the value for 3 is: 3
Enter the value for 4 is: 4
Enter the value for 5 is: 5
*/