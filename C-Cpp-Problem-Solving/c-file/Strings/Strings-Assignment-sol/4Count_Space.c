//Write a program to count spaces in a given string.
// input: hello world 
//output: 1 space.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],space=' ';
    int i,count;

    printf("Enter a string: ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    for(i=0,count=0;i<=str[i];i++) 
        if(str[i]==space)
            count++;
    
    printf("%d space's ",count);

    return 0;
}



