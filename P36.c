#include <stdio.h>

int main()
{
    int n;
    printf("Enter value for n: ");
    scanf("%d", &n);

    const int *constantPtr;
    int *wildCardPtr;
    constantPtr = wildCardPtr = &n;

    printf("Value via constant pointer: %d\n", *constantPtr);
    printf("Value via wildcard pointer: %d\n", *wildCardPtr);

    *wildCardPtr = 69;

    printf("Changed value using wildcard pointer: %d\n", *constantPtr);
    return 0;
}