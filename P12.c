/*
'''
@author: 001 Harsh Patel
@description: Program No. 12 - Program to reverse an array
'''
*/

#include <stdio.h>

int main()
{
    int array[5], i, temp;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nArray before reversing is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    for (i = 0; i < 5 / 2; i++)
    {
        temp = array[i];
        array[i] = array[5 - i - 1];
        array[5 - i - 1] = temp;
    }

    printf("Array after reversing is: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

/*
Enter the value for 1: 1
Enter the value for 2: 2
Enter the value for 3: 3
Enter the value for 4: 4
Enter the value for 5: 5

Array before reversing is: 1 2 3 4 5
Array after reversing is: 5 4 3 2 1
*/