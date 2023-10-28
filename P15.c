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
    int sum = 0, product = 1;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter value for (%d%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            product *= matrix[i][j];
        }
    }
    printf("\nThe sum of all the elements is: %d\n", sum);
    printf("The product of all the elements is: %d\n", product);

    return 0;
}