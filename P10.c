/*
'''
@author: 001 Harsh Patel
@description: Program No. 10 - a. Program to find Sum of N Input Numbers using Array
                               b. Program to get a set of positive integers from user and store it in an array of size 10. Calculate the sum of odd integers and product of even integers.
'''
*/

#include <stdio.h>

int main()
{
    int n, sum = 0, i;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    int array[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("The sum is: %d\n\n", sum);

    printf("Part B\n");
    int my_integers[10], product = 1;
    sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &my_integers[i]);
        if (my_integers[i] % 2 == 0)
            product *= my_integers[i];
        else
            sum += my_integers[i];
    }

    printf("The sum of odd numbers from the array is: %d\n", sum);
    printf("The product of even numbers from the array is: %d\n", product);

    return 0;
}

// Output for Part A
/*
Enter the value for n: 3
Enter the value for 1: 22
Enter the value for 2: 45
Enter the value for 3: 5
The sum is: 72
*/

// Output for Part B
/*
Enter number 1: 1
Enter number 2: 2
Enter number 3: 3
Enter number 4: 4
Enter number 5: 5
Enter number 6: 6
Enter number 7: 7
Enter number 8: 8
Enter number 9: 9
Enter number 10: 0
The array has 5 odd numbers and 5 even number :)
*/