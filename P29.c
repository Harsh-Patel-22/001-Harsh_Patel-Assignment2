/*
'''
@author: 001 Harsh Patel
@description: Program No. 29 - Program to store n elements in an array and print them using pointer.
'''
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *numbers;
    printf("How many values do you want to store: ");
    scanf("%d", &n);

    numbers = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Value %d is: %d\n", i + 1, numbers[i]);
    }

    return 0;
}

/*
How many values do you want to store: 3
Enter value 1: 1
Enter value 2: 2
Enter value 3: 3
Value 1 is: 1
Value 2 is: 2
Value 3 is: 3
*/