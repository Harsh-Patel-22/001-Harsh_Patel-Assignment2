/*
'''
@author: 001 Harsh Patel
@description: Program No. 32 - Program to compute the sum of all elements in an array using pointers.
'''
*/

#include <stdio.h>

int main()
{
    int sum = 0, i, numbers[5], *ptr;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    ptr = &numbers[0];
    for (i = 0; i < 5; i++)
    {
        sum += *ptr;
        ptr++;
    }
    printf("The sum is: %d", sum);
    return 0;
}

/*
Enter the value for 1: 22
Enter the value for 2: 45
Enter the value for 3: 56
Enter the value for 4: 32
Enter the value for 5: 12
The sum is: 167
*/