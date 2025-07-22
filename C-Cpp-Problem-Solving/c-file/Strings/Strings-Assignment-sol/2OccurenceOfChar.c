// Write a program to count the occurrence of a given character
// in a given string.
// input: 
// string:   Programming
// character:  g
// output: 2 times
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ch;
    int i,count;
    printf("Enter a String: "); 
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';// remove demiliter '\n' 

    printf("\nString: ");
    scanf("%c",&ch); 
   
    for(i=0,count=0;str[i];i++)
    {
        if(ch==str[i]) 
             count++;   
    }

    printf("\noccured %d times",count);
    return 0;
}