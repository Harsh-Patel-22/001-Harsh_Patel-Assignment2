#include <stdio.h>
#include <string.h>

int main()
{
    char paragraph[256];
    printf("Enter a paragraph: ");
    gets(paragraph);

    int i;
    int freqCount[150] = {0};

    for (i = 0; i < strlen(paragraph); i++)
    {
        freqCount[(int)paragraph[i]]++;
    }

    printf("Character frequency is: \n");
    for (i = 0; i < 150; i++)
    {
        if (freqCount[i] > 0)
        {
            printf("%c: %d\n", i, freqCount[i]);
        }
    }

    return 0;
}