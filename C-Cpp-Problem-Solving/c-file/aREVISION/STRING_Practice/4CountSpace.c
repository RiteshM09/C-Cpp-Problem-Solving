//Write a program to count spaces in a given string.
// input: hello world 
//output: 1 space.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ch=' ';

    printf("ENTER STRING: ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';
    int count=0,i=0;
    while(str[i])//hello world
    {
        if(str[i]==ch)
            count++;
            
        i++;
    }
    printf("SPACE OCCURED %d times",count);
    return 0;
}

