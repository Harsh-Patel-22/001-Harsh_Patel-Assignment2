#include<stdio.h>
#include<string.h>

int main()
{
    char holder[11], name[11], temp;
    int length, i;

    printf("Enter your name: ");
    scanf("%s", name);
    
    length= strlen(name);
    strcpy(holder, name);
    
    for(i=0; i<length/2; i++)
    {
        temp = name[i];
        name[i] = name[length-i-1];
        name[length-i-1] = temp;
    }
    if(!strcmp(holder, name))
    printf("The string %s is palindrome.", holder);
    
    else
    printf("The string %s is not palindrome.", holder);
    
    return 0;
}