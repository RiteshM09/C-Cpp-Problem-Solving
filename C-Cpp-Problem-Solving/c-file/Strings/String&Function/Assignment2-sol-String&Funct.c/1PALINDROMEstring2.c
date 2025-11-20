//1. Write a function to check whether a given string is palindrome or not.
/*
TWO POINTER APPROACH
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
  int left,right;
  left=0; 
  right = strlen(s)-1; //hello s[len]=5, s[len-1]=last character, s[5-1]=s[4]=o
   
     while(left<right){// s = NOON // 0 3 T, 1 2 T, 2 3 F
        if(s[left]!=s[right])
        {
             return 0;// if mis-match found, NOT palindrome
        }  
        left++;//move to next
        right--;// move backward frm last
     }
     return 1; // if no mis-match found, then its palindrome
}

 
// while(s[i])TNT
// if(s[i])
// i--;

// madam
// 1 rev sting
// if(s[i]==original)
