/*
'''
@author: 001 Harsh Patel
@description: Program No. 2 - Program to find out the average of n numbers using arrays.
'''
*/

#include <stdio.h>

int main()
{
    int n;
    printf("How many elements do you want: ");
    scanf("%d", &n);
    int array[n], i, sum = 0;
    float average;

    for (i = 0; i < n; i++)
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }

    average = (float) sum / n;
    printf("The average is: %f.", average);

    return 0;
}

/*
How many elements do you want: 3
Enter the value for 1: 22
Enter the value for 2: 45
Enter the value for 3: 21
The average is: 29.333334.
*/