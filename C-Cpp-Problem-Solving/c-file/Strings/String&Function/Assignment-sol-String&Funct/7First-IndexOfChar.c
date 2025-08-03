// Write a function to find a character in a given string. 
// Return index of first occurrence of given character. 
// Return -1 if character not found.
/*
1   input: Ritesh 
    enter character: h
    output: index 5

2   input: Ritesh 
    enter character: c
    output: Not found(-1)  
*/
#include<stdio.h>
#include<string.h>
int Char_FirstIndex(char str[],char ch);
int main()
{
    char str[50],ch,l;
    int index;

    printf("Enter String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';   
    
    printf("Enter Character: ");
    scanf("%c",&ch);

    index=Char_FirstIndex(str,ch);
    
    if(index==-1)   
        printf("Element not found");
    else
    printf("character %c found at %d index",ch,index);

    return 0;
}
int Char_FirstIndex(char str[],char ch){
    int i;
    for(i=0;str[i];i++)
    { 
        if(ch==str[i]){
            return i;
            break;
        }
    }   
    return -1;
}