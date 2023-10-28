/*
'''
@author: 001 Harsh Patel
@description: Program No. 30 - Program to find the factorial of a given number using pointers.
'''
*/

#include <stdio.h>

int main()
{
    int i, n, *ptr, factorial = 1;
    ptr = &n;
    printf("Enter the value for n: ");
    scanf("%d", ptr);

    if (*ptr > 0)
    {
        for (i = 2; i <= *ptr; i++)
        {
            factorial *= i;
        }
        printf("Factorial for %d = %d", *ptr, factorial);
    }
    else
        printf("Factorial for %d does not exist!", *ptr);

    return 0;
}

/*
Enter the value for n: 6
Factorial for 6 = 720
*/