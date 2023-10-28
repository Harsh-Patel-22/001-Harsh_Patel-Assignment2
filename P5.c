/*
'''
@author: 001 Harsh Patel
@description: Program No. 5 - Program to insert and delete an element from the given array.
'''
*/

#include <stdio.h>

int main()
{
    int max_size = 7, used_size = 5;
    int array[used_size], i, operation, index;

    for (i = 0; i < used_size; i++) // loop to take input values and keeping an empty space to add
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nArray before: ");
    for ( i = 0; i < used_size; i++) // displaying array before applying operation
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("\nSelect an operation:\n");
    printf("1. Insert an element\n");
    printf("2. Delete an element\n");
    printf("Choice: ");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        printf("\nEnter the index where you want to insert an element: ");
        scanf("%d", &index);
        if (index >= 0 && index < used_size)
        {
            for (i = max_size - 1; i > index; i--) // loop to shift each element by 1 index making space for inserting element
            {
                array[i] = array[i-1];
            }
            printf("Enter the value to be inserted at %d: ", index);
            scanf("%d", &array[i]);   
            used_size++;         
        }
        else
        {
            printf("\nEnter valid array index!\n");
        }
        break;

    case 2:
        printf("\nEnter the index where you want to delete an element: ");
        scanf("%d", &index);
        if (index >= 0 && index < used_size)
        {
            for (i = index; i < used_size; i++)
            {
                array[i] = array[i+1];
            }  
            array[i] = -1;   
            used_size--;
        }
        else
        {
            printf("\nEnter valid array index!\n");
        }
        break;

    default:
        printf("Enter valid array operation!\n");
        break;
    }

    printf("\nArray after: ");
    for ( i = 0; i < used_size; i++)
    {
        printf("%d ", array[i]);
    }
    

    return 0;
}

// Output 1:
/*
Enter the value for 1: 1
Enter the value for 2: 2
Enter the value for 3: 3
Enter the value for 4: 4
Enter the value for 5: 5

Array before: 1 2 3 4 5

Select an operation:
1. Insert an element
2. Delete an element
Choice: 1

Enter the index where you want to insert an element: 2
Enter the value to be inserted at 2: 22

Array after: 1 2 22 3 4 5
*/


// Output 2:
/*
Enter the value for 1: 1
Enter the value for 2: 2
Enter the value for 3: 3
Enter the value for 4: 4
Enter the value for 5: 5

Array before: 1 2 3 4 5

Select an operation:
1. Insert an element
2. Delete an element
Choice: 2

Enter the index where you want to delete an element: 3

Array after: 1 2 3 5
*/