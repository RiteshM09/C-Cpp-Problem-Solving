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
    return 0;  
}
int CountWords(char s[])
{      
    int i=0,count=0,flag=0;

    
    while(s[i])
    {

        if(s[i]!= ' ' && flag==0)
        {
            flag=1;
            count++;
        }
        else if(s[i]==' ')  // if space found make flag=0,to check next word 
            flag=0;
        
        i++;
    }
    return count;
}


 