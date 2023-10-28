/*
'''
@author: 001 Harsh Patel
@description: Program No. 21 - Program to
                                a. Count the total number of words in a string.
                                b. Count total number of alphabets, digits and special characters in a string.
'''
*/

#include <stdio.h>

int main()
{
    char paragraph[100], c;
    int words = 0, alphabets = 0, digits = 0, spchars = 0, i = 0;

    printf("Enter a paragraph: ");
    gets(paragraph);

    do
    {
        c = paragraph[i];
        if (c == ' ')
            words++;
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            alphabets++;
        else if (c >= '0' && c <= '9')
            digits++;
        else
        {
            spchars++;
        }
        i++;
    } while (c != '\0');
    spchars--;
    words++; // if spaces are n, words r n+1

    printf("\nThe paragraph has %d words, %d alphabets, %d digits and %d special characters.", words, alphabets, digits, spchars);

    return 0;
}

/*
Enter a paragraph: Hi! My name is Agent001!
The paragraph has 5 words, 15 alphabets, 3 digits and 2 special characters.
*/