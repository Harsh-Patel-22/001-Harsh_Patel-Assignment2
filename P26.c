#include <stdio.h>
#include <string.h>

int main()
{
    char paragraph[256], temp;
    int length, i, j;

    printf("Enter a paragraph: ");
    gets(paragraph);

    length = strlen(paragraph);

    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (paragraph[j] > paragraph[j + 1])
            {
                temp = paragraph[j];
                paragraph[j] = paragraph[j + 1];
                paragraph[j + 1] = temp;
            }
        }
    }

    printf("The string in alphabetical order is: %s", paragraph);

    return 0;
}