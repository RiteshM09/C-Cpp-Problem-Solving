//Write a function to reverse a string word wise. (For example if the given string is
//"My name is Ritesh" then the resulting string should be "Ritesh is name My"
#include<stdio.h>
#include<string.h>
char* ReverseWords(char s[]);
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';  
    
    printf("Total words:%d",CountWords(str));
    return 0;  
}
char* ReverseWords(char s[])
{      
    
}


 