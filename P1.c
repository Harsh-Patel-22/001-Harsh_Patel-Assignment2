/*
'''
@author: 001 Harsh Patel
@description: Program No. 1 - Taking input for 10 values and storing it in an array and displaying the values.
''' 
*/

#include <stdio.h>

int main()
{
    int array[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("The value for %d is: %d\n", i+1, array[i]);
    }

    return 0;
}

/*
Enter the value for 1: 1
Enter the value for 2: 2
Enter the value for 3: 3
Enter the value for 4: 4
Enter the value for 5: 5
Enter the value for 6: 6
Enter the value for 7: 7
Enter the value for 8: 8
Enter the value for 9: 9
Enter the value for 10: 0
The value for 1 is: 1
The value for 2 is: 2
The value for 3 is: 3
The value for 4 is: 4
The value for 5 is: 5
The value for 6 is: 6
The value for 7 is: 7
The value for 8 is: 8
The value for 9 is: 9
The value for 10 is: 0
*/