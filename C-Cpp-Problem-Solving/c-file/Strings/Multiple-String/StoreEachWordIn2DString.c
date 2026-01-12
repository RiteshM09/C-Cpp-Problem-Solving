// 4. Write a function to store each word a string in a 2 dimensional char array.
/*
input string : hello
output 2d string : s[0][20] = hello
                   s[1][20] = this
                   s[2][20] = is
                   s[3][20] = ritesh
                   s[4][20] = \0

*/
#include<stdio.h>
#include<string.h>
void StoreStringWord(char [], char word[5][20]);
int main()
{
    char s[20];
    char w[5][20];
    printf("enter a string : ");
    fgets(s,20,stdin);
    s[strlen(s)-1]='\0';

    StoreStringWord(s,w);
    return 0;
}
void StoreStringWord(char str[20], char word[5][20]){// hell0 
    // char str[size][20];
    // for(int i=0;original[i];i++)
    // {
    //     strcpy(str[i],original[i]);
    // }

    //  for(int i=0;str[i];i++)
    //     printf(" %s",str[i]);
 
}
int coutwords(char str[20])
{
    int i=0;
    count=0;
    // skip leading spaces 
    while(str[i])
    i++;

    // i is at non spacing char

    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            count=1;
            break;
        }
        i++;
    }
    // i is at 1 spacing char
    while(str[i]= str[i]!='\0')
        
}