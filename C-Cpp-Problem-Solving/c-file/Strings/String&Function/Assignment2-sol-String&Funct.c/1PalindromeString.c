//1. Write a function to check whether a given string is palindrome or not.
/*
input : Hello
output: No

input : TNT
output: yes

input : Madam
output: Not 

*/
#include<stdio.h>
#include<string.h>
int PalindromeString(char s[]);
int main()
{
    char str[50];
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';    
   
    if(PalindromeString(str))
        printf("TRUE");
    else    
        printf("FALSE");

}
int PalindromeString(char s[])
{   
    char original[50],ch;
    int i,len;
    strcpy(original,s);

    len=strlen(s);
    // Reverse string
    for(i=0;i<len/2;i++) // 0 to len/2 
        if(s[i]!=s[len-1-i])
            return 0;// if mismatch found r
    return 1;// loop compter all matched
}

 
// while(s[i])TNT
// if(s[i])
// i--;

// madam
// 1 rev sting
// if(s[i]==original)
