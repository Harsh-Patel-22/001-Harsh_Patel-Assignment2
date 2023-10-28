#include <stdio.h>
#include <string.h>

int main()
{
    char paragraph[100];
    int frequency_of_the = 0, i = 0;

    printf("Enter your paragraph: ");
    gets(paragraph);

    do
    {

        if (paragraph[i] == 't' && paragraph[i + 1] == 'h' && paragraph[i + 2] == 'e' && paragraph[i + 3] == ' ')
        {
            frequency_of_the++;
        }

        i++;
    } while (paragraph[i] != '\0');

    printf("The word 'the' occured %d times.\n", frequency_of_the);

    return 0;
}