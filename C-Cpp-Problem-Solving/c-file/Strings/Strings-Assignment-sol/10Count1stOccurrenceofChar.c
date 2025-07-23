//Write a program to find first occurrence of a given character in a given string.
/*
input: Hello World
enter chararcter : l
output: First occurrence of 'l' is at index 2
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ch;
    int i,count=0;

    printf("Enter string: ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    printf("Enter charater: ");
    scanf("%c",&ch);


    printf("First occurrence of %c is at ",ch);
    for(i=0;str[i];i++)//  str[2]=l , ch=l, str = hello world
    {
        if(str[i]==ch)
        {   
            printf("inde %d",i);
            break;
        }            
    }
    if(str[i]!=ch)
        printf("not found");
   
    return 0;
}