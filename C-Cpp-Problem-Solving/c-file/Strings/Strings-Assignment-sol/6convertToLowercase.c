// Write a program to convert a given string into lowercase
// NOTE: Ascci code of  A - 65, a - 97 (difference - 32)  
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i;

    printf("Enter a sting: ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
        if(str[i]>='A' && str[i]<='Z')// check for upper case letter only
            str[i]=str[i]+32;

    printf("Update String: %s",str);
    return 0;
}