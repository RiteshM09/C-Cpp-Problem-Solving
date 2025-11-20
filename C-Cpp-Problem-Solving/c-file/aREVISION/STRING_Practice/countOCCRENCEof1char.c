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


    printf("Enter string: ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    printf("Enter a character : ");
    scanf("%c",&ch);

    int i=0, index=0;
    while(str[i]){
        if(ch==str[i]){
            index=i;
            break;
        }
        i++;
    }
    printf("1st Occerence of character %c is at index %d ",ch,index);

    return 0;
}