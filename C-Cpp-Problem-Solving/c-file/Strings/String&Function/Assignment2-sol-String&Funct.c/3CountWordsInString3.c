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

    // Skip leading spaces
    while (s[i] == ' ')
        i++;

    while(s[i])
    {
        // Detect start of the word 
        if (s[i] != ' ' && (s[i+1] == ' ' || s[i+1] == '\0'))
            count++;
        i++;
    }

    // If there was at least one word, add 1
    if (s[0] != '\0' && s[0] != ' ')
        count++;

    if(count==0)// edge case
        return 0;
    
    return count;
}



 