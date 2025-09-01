// Write a function to count words in a given string
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
    printf("\n");
    return 0; 
    
}
int CountWords(char s[])
{      
    int i=0,count=0,flag=0;
    
    while(s[i])
    {
        flag=0;// reinitilize flag for next word
        while(s[i]!=' ' && s[i]) // check charachter is non space and inside the string
        {                        // loop for each word
            flag++;
            i++;
        }

        if(flag) // if flag is non zero then increase count
            count++;

        i++;// move to next character
    }
    return count;
}


 