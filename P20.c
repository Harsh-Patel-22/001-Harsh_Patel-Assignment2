/*
'''
@author: 001 Harsh Patel
@description: Program No. 18 - Program to
                                a. Compare two strings with using string library functions.
                                b. Compare two strings without using string library functions.
'''
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name1[10], name2[15], c1, c2;
    int source_length = 10, i = 0, isSame = 1;
    printf("Enter value for name1: ");
    scanf("%s", name1);

    printf("Enter value for name2: ");
    scanf("%s", name2);

    printf("\nChecking with library function: ");
    if (!strcmp(name1, name2))
        printf("Both strings are same!\n");
    else
        printf("Both strings are different :(\n");

    do
    {
        c1 = name1[i];
        c2 = name2[i];
        if (c1 != c2)
        {
            isSame = 0;
        }
        i++;
    } while (c1 != '\0' || c2 != '\0');

    printf("Checking manually: ");
    if (isSame)
        printf("Both strings are same!\n");
    else
        printf("Both strings are different :(\n");

    return 0;
}

// Output 1
/*
Enter value for name1: harsh
Enter value for name2: harshhh
Checking with library function: Both strings are different :(
Checking manually: Both strings are different :(
*/

// Output 2
/*
Enter value for name1: harsh
Enter value for name2: harsh
Checking with library function: Both strings are same!
Checking manually: Both strings are same!
*/