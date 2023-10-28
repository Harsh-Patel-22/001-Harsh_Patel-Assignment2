/*
'''
@author: 001 Harsh Patel
@description: Program No. 18 - Program to
                                a. Input a string and print it.
                                b. Find the length of a string without using library function.
                                c. Find the length of a String with standard library function
'''
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char name[10], c;
    int length = 0;
    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nYour name is: %s\n", name);

    do
    {
        c = name[length];
        length++;
    } while (c != '\0');
    length--;

    printf("The length without library function is: %d\n", length);
    printf("The length with library function is: %d\n", strlen(name));
    return 0;
}

/*
Enter your name: harsh
Your name is: harsh
The without library function length is: 5
The with library function length is: 5
*/