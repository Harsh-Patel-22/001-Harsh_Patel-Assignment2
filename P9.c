#include <stdio.h>

int main()
{
    int numbers[5], i, f_max, s_max, f_min, s_min, temp;
    for (i = 0; i < 5; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    f_max = f_min = numbers[0];
    s_max = s_min = numbers[1];
    if (f_max < s_max)
    {
        temp = f_max;
        f_max = s_max;
        s_max = temp;
    }
    for (i = 2; i < 5; i++)
    {
        if (numbers[i] > f_max)
        {
            s_max = f_max;
            f_max = numbers[i];
        }
        else if (numbers[i] > s_max && numbers[i] < f_max)
        {
            s_max = numbers[i];
        }
    }

    if (f_min > s_min)
    {
        temp = f_min;
        f_min = s_min;
        s_min = temp;
    }
    for (i = 2; i < 5; i++)
    {
        if (numbers[i] < f_min)
        {
            s_min = f_min;
            f_min = numbers[i];
        }
        else if (numbers[i] < s_min && numbers[i] > f_min)
        {
            s_min = numbers[i];
        }
    }
    printf("1st and 2nd Maximum Values are: %d and %d respectively.\n", f_max, s_max);
    printf("1st and 2nd Minimum Values are: %d and %d respectively.\n", f_min, s_min);

    return 0;
}