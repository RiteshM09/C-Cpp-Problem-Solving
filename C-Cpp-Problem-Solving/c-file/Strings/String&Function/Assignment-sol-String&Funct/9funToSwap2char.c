//Write a function to swap two characters of a given string with specified indices.
// edge case: index outof string length 
/*
input: Hello
index 1: 3
index 2: 4
output: Helol
*/
#include<stdio.h>
#include<string.h>
void SwapCharacterOfIndices(char s[],int index1,int index2);
int main()
{
    char str[50];
    int one,two;

    printf("Enter string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    printf("Enter Index 1: ");
    scanf("%d",&one);

    printf("Enter Index 2: ");
    scanf("%d",&two);

    if(one<strlen(str) && two<strlen(str)){
        SwapCharacterOfIndices(str,one,two);
        printf("New String after Swapping: %s",str);
    } 
    else{
         printf("Invalid indices");
    }    

    return 0;
}
void SwapCharacterOfIndices(char s[],int index1,int index2)
{
    char ch;                    
    ch=s[index1];
    s[index1]=s[index2];
    s[index2]=ch;
}
