/*
'''
@author: 001 Harsh Patel
@description: Program No. 8 - Program to find the minimum and maximum value and its position in array from
the given numbers using array.
'''
*/

#include <stdio.h>

int main()
{
    int i, array[5];
    int max, min, max_index = 0, min_index = 0;

    for (i = 0; i < 5; i++) // filling the array
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    max = min = array[0];
    for (i = 0; i < 5; i++) // finding max and min along with resp. index
    {
        if (array[i] > max)
        {
            max = array[i];
            max_index = i;
        }
        else if (array[i] < min)
        {
            min = array[i];
            min_index = i;
        }
    }

    printf("The max element is %d at index %d.\n", max, max_index);
    printf("The min element is %d at index %d.", min, min_index);

    return 0;
}

/*
Enter the value for 1: 12
Enter the value for 2: 3
Enter the value for 3: 45
Enter the value for 4: 21
Enter the value for 5: 9
The max element is 45 at index 2.
The min element is 3 at index 1.
*/