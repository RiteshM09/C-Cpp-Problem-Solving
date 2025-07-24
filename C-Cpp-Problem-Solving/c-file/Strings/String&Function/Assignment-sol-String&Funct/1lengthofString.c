// Write a function to calculate length of the string
#include<stdio.h>
#include<string.h>
int LengthofString(char s[]);
int main()
{
    char str[50];
    printf("Enter string:");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    printf("Length of string : %d",LengthofString(str));
    return 0;
}
int LengthofString(char s[]){
    int i;
    for(i=0;s[i];i++);

    return i;
}