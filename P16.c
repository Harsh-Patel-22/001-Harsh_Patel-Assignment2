/*
'''
@author: 001 Harsh Patel
@description: Program No. 16 - Program for transpose of a matrix
'''
*/

#include <stdio.h>

int main()
{
    int m, n, i, j;
    printf("Enter the number of m and n: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n], transpose[n][m];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\n\nThe matrix is:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe transpose is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Enter the number of m and n: 2 3
Enter element [0][0]: 1
Enter element [0][1]: 2
Enter element [0][2]: 3
Enter element [1][0]: 4
Enter element [1][1]: 5
Enter element [1][2]: 6


The matrix is:
1 2 3
4 5 6


The transpose is:
1 4
2 5
3 6
*/