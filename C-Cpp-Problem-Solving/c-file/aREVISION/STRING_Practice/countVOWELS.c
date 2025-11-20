//Write a program to count vowels in a given string
// input: hello world
// output: 3 vowels
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], vowel[]="AEIOUaeiou";
    printf("ENTER String: ");
    fgets(str,50,stdin);
    
    str[strlen(str)-1]='\0';

    int i=0,j=0,count=0;
    while(str[i])
    {
        j=0;//
        while(str[j]){
             if(str[i]==vowel[j]) 
            {
                count++;
                break;
            }
            j++;
        }
        i++;
    }
    printf("VOWELS : %d",count);
    return 0;
}