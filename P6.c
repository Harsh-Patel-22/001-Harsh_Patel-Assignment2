/*
'''
@author: 001 Harsh Patel
@description: Program No. 6 - Program to search an element and its position from the given array.
'''
*/

#include <stdio.h>

int main()
{
    int n = 5, i, search_value, isPresent = 0;
    int array[n];

    for (i = 0; i < n; i++) // filling arrray
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("The array as elements: ");
    for (i = 0; i < n; i++) // displaying arrray
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");    

    printf("Enter the value to be searched: ");
    scanf("%d", &search_value);

    for (i = 0; i < n; i++)
    {
        if (array[i] == search_value)
        {
            printf("Value %d present at %d index.", search_value, i);
            isPresent = 1;
        }
    }

    if (!isPresent)
    {
        printf("Value %d is not present!", search_value);
    }

    return 0;
}

/*
Enter the value for 1: 12
Enter the value for 2: 23
Enter the value for 3: 34
Enter the value for 4: 45
Enter the value for 5: 56
The array as elements: 12 23 34 45 56 

Enter the value to be searched: 34
Value 34 present at 2 index.
*/