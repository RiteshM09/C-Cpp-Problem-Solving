// Write a function to swap strings of two char arrays.
/*
...
Input:
str1 = "hello"
str2 = "world"

Output:
str1 = "world"
str2 = "hello"
...
Input:
str1 = ""
str2 = "abc"

Output:
str1 = "abc"
str2 = ""
...
Input:
str1 = "short"
str2 = "averylongstring"

Output:
str1 = "averylongstring"
str2 = "short"
...
*/
#include<stdio.h>
#include<string.h>
void SwapString(char*, char *);
int main()
{
    char str1[50], str2[50];
    printf("Enter String 1: ");
    fgets(str1,50,stdin);
    str1[strcspn(str1,"\n")]='\0';
    
    printf("Enter String 2: ");
    fgets(str2,50,stdin);    
    str2[strlen(str2)-1] ='\0';

    SwapString(str1,str2);
    printf("\nafter swapping string 1: %s",str1);
    printf("\nafter swapping string 2: %s",str2);

}
void SwapString(char* s1, char *s2){

    int s1Size=strlen(s1);
    int s2Size=strlen(s2);
    // size of (s1,s2) hello, bro = 5, 3 
    printf("len of (s1,s2) =%d,%d",s1Size,s2Size);
    int i=0,j=0;
    while(i<s1Size || j<s2Size)// last index = s1Size-1 & s2Size-1
    {
        char ch=s1[i];
        s1[i]=s2[j];
        s2[j]=ch;
        i++;
        j++;
    }
    s1[s2Size]='\0';
    s2[s1Size]='\0';

    /*
    or

    // using strcpy with extra string
    char temp[50];
    strcpy(temp,str1);
    strcpy(str1,str2)
    strcpy(str2,temp);
    
    */
}