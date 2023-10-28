/*
'''
@author: 001 Harsh Patel
@description: Program No. 18 - Program to
                                a. Concatenate two strings with using strcat standard library function.
                                b. Concatenate two strings without using strcat standard library function.
'''
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char string1[22], string2[10], string1copy[22], c;
    int f_len, i = 0;

    printf("Enter your first name: ");
    scanf("%s", string1);
    printf("Enter your last name: ");
    scanf("%s", string2);

    strcpy(string1copy, string1);
    strcat(string1copy, string2);
    printf("\n(Library Function) Concatenated string is: %s\n", string1copy);


    f_len = strlen(string1);

    do
    {
        c = string2[i];
        string1[f_len + i] = c;

        i++;
    } while (c != '\0');
    string1[f_len + i] = '\0';
    printf("(Manually) Concatenated string is: %s\n", string1);

    return 0;
}

/*
Enter a paragraph: Hi! My name is Agent001!
The paragraph has 5 words, 15 alphabets, 3 digits and 2 special characters.
*/