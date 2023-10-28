#include <stdio.h>
#include <string.h>

int main()
{
    char name[11], *ptr;
    int length = 0;
    printf("Enter your name: ");
    gets(name);

    ptr = name;
    while (*ptr != '\0')
    {
        length++;
        ptr++;
    }
    printf("The length of the string is: %d", length);

    return 0;
}