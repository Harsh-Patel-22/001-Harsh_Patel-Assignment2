#include <stdio.h>

int main()
{
    int n = 2, m = 3, i, j;
    int arr[n][m], *ptr;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter value for index (%d %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\n");
    ptr = &arr[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("Value at index (%d %d): %d\n", i, j, *ptr);
            printf("Address is: %u\n\n", ptr);
            ptr++;
        }
    }

    return 0;
}