// Write a function to reverse a string.
/*
input: Hello 
output: olleH
*/
#include<stdio.h>
#include<string.h>
void ReverseString(char s[]);
int main()
{
    char str[50];
    printf("Enter string:");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    ReverseString(str); 
    return 0;
}
void ReverseString(char s[]){
    char ch,i;
    int len;

    len=strlen(s);

    for(i=0;i<len/2;i++)
    {
        ch=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=ch;
    }

    printf("String: %s",s);

}