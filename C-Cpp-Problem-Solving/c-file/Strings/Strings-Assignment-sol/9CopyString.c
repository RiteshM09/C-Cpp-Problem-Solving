//Write a program in C to copy one string to another char array. without using strcpy()
/*
input: enter a sting: HEllO
output: copied string: HEllO
*/ 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],copy[50];
    int i;

    printf("Enter string: ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)
    {
        copy[i]=str[i];
    }
    
    copy[i]='\0';
    printf("copied string: %s",copy);

    return 0;
}