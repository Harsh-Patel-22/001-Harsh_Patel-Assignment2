/*
'''
@author: 001 Harsh Patel
@description: Program No. 14 - Program to read and print a Row and Column Matrix
'''
*/

#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    printf("Enter the value for rows and cols for a matrix: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0)
    {
        printf("Enter valid value for rows and columns.\n");
        return 1;
    }
    int matrix[rows][cols];
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter value for (%d%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe resultant matrix is:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
