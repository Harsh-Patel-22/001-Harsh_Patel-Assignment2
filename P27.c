#include<stdio.h>
#include<string.h>

int main()
{
    char paragraph[100], c;
    int length, i = 0;

    printf("Enter your paragraph: ");
    gets(paragraph);
    
    
    do
    {
        c = paragraph[i];
        if(c>='A' && c <='Z')
        paragraph[i] += 32;
        else if(c>='a' && c <='z')
        paragraph[i] -= 32;
        
        i++;
    } while(c != '\0');
    
    printf("The updated paragraph is: %s", paragraph);
    
    return 0;
}