#include <stdio.h>
#include <string.h>

int main()
{
    char name[11], *ptr, i;
    printf("Enter your name: ");
    gets(name);

    i = strlen(name) - 1;
    ptr = &name[i];

    printf("The name is: ");
    while (i != -1)
    {
        printf("%c", *ptr);
        ptr--;
        i--;
    }

    return 0;
}