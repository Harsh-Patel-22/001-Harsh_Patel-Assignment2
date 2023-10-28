#include<stdio.h>
#include<string.h>

int main()
{
    char name[11], temp;
    int length, i;
    
    printf("Enter your name: ");
    scanf("%s", name);
    length= strlen(name);
    for(i=0; i<length/2; i++)
    {
        temp = name[i];
        name[i] = name[length-i-1];
        name[length-i-1] = temp;
    }
    printf("Your reversed name is: %s", name);
    return 0;
}