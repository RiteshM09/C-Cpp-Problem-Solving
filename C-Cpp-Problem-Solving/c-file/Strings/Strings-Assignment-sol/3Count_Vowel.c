//Write a program to count vowels in a given string
// input: hello world
// output: 3 vowels
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],v[]="aeiouAEIOU";
    int count=0,i,j;

    printf("Enter a String: ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    for(i=0;str[i];i++)   // rit 
        for(j=0;v[j];j++) // aeiouAEIOU
            if(v[j]==str[i])
            {
                count++;
                break; // if vowel found, break & move to next letter
            }


    printf("%d vowels",count);

    printf("\n");
    return 0;
}