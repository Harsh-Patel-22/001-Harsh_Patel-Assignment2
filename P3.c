#include <stdio.h>

int main()
{
    int array[10];
    int i, number_of_even = 0, number_of_odd = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Enter the value for %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (array[i] % 2 == 0)
            number_of_even++;
        else
            number_of_odd++;
    }
    printf("\nThe number of odd and even numbers in the array are: %d and %d.", number_of_odd, number_of_even);

    return 0;
}
