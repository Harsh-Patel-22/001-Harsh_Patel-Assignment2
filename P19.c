/*
'''
@author: 001 Harsh Patel
@description: Program No. 18 - Program to
                                a. Copy one string to another string with using strcpy function.
                                b. Copy one string to another string without using strcpy function.
'''
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char source_name[10], target_name1[15], target_name2[15], c;
    int source_length = 10, i;
    printf("Enter your name: ");
    scanf("%s", source_name);

    strcpy(target_name1, source_name);
    printf("\n(With) The value for target string is: %s\n", target_name1);

    for (i = 0; i < source_length; i++) // copying manually
    {
        target_name2[i] = source_name[i];
    }
    target_name2[i] = '\0';

    printf("(Without) The value for target string is: %s", target_name2);

    return 0;
}

/*
Enter your name: harsh
(With) The value for target string is: harsh
(Without) The value for target string is: harsh
*/