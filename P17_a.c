#include <stdio.h>

int main()
{
    int i, j;
    int m1[3][3], m2[3][3], result[3][3];

    printf("Enter values for matrix 1:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("For (%d%d): ", i+1, j+1);
            scanf("%d", &m1[i][j]);
        }
    }

    printf("\n\nEnter values for matrix 2:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("For (%d%d): ", i+1, j+1);
            scanf("%d", &m2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }

    printf("\nThe resultant matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}