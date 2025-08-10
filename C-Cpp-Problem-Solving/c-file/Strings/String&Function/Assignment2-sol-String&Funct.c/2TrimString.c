// 2. Write a function to trim a string (removing leading spaces from both the ends).
/*
Input: " hello world "
Output: "hello world"

Input:  "   ANT"
Output: "ANT"
*/
#include<stdio.h>
#include<string.h>
char* TrimSide(char s[]);
int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';  
   
    printf("New:%s",TrimSide(str));
    return 0;  
}
char* TrimSide(char s[])
{      
    char ch; 
    int i=0,j,len;
    while(s[i]==' ')// trim from start 
        i++;
    //i=2,j=0;
    for(j=0;s[j];j++)// Shift characters to left starting from index 0
    {
        s[j]=s[i];
        i++;
    }

    len=strlen(s)-1; // trim from last 

    for(j=len;s[j]==' ';j--);// start from len-1 till non space char is found

    s[j+1]='\0';// place null character right after non space character 
    return s;
}


 