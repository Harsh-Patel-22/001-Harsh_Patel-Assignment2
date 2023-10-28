#include <stdio.h>
#include <string.h>

int main()
{
    char name1[11], name2[11], temp[11];

    printf("Enter name 1: ");
    gets(name1);
    printf("Enter name 2: ");
    gets(name2);

    printf("\nValue of name1 and name2 before swapping is: %s and %s resp.\n", name1, name2);

    strcpy(temp, name1);
    strcpy(name1, name2);
    strcpy(name2, temp);

    printf("Value of name1 and name2 after swapping is: %s and %s resp.\n", name1, name2);
    return 0;
}