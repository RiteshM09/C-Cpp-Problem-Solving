// Write a function to count words in a given string
// logic 3: count white space instead.
/*
input: Hello World
output: 2

input: ""  
input: " "
output: 0

input: all is well
output: 3

input: A 
output: 1
*/
#include<stdio.h>
#include<string.h>
int CountWords(char s[]);
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';  
    
    printf("Total words:%d",CountWords(str));
    return 0;  
}int CountWords(char s[])
{
    int i = 0, count = 0;

    while(s[i])
    {
        // Detect start of the word 
        if (s[i] != ' ' && (s[i+1] == ' ' || s[i+1] == '\0'))
            count++;
        i++;
    }

    return count;
}



 