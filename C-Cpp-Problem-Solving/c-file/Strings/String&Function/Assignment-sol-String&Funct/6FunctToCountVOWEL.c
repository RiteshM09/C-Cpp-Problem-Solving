// Write a function to count vowels in a given string.
// write a function to compare 2 string without using inbuilt function.
/*
input: HELLo
Output: hello
*/
#include<stdio.h>
#include<string.h>
int CountVOWEL(char s[],char v[]);
int main()
{
    char str[50];
    char Vowel[]={"AEIOUaeiou"};
    int result;
    printf("Enter 1st String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    result=CountVOWEL(str,Vowel);
    printf("No of VOWELS: %d",result);
    return 0;

}
int CountVOWEL(char s[],char v[])
{
    int i=0,j=0,count=0;

    while(s[i]){
        j=0; //reinitilize j for checking next character
        while(v[j]){
            if(s[i]==v[j])
            {
                count++;
                break; // if found exit this(v[j]) loop and move to next character
            }
        j++;    
        } 
    i++;
    }

    return count;
}

