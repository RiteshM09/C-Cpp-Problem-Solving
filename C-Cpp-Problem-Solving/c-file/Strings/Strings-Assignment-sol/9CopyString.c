//Write a program in C to copy one string to another char array.
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

    strcpy(copy,str);
    printf("copied string: %s",str);

    return 0;
}