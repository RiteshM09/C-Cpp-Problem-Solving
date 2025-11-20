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
    printf("ENTER String : ");
    fgets(str,50,stdin);

    printf("Enter character =");
    scanf("%c",&ch);
    // adjust delimiter
    str[strlen(str)-1]='\0';

    int count=0,i=0;
    while(str[i]){
        if(str[i]==ch)
        {
            count++;
        }
        i++;
    }
    printf("\n%d times",count);

    return 0;
}