// 1. Write a function to store strings, taken from user, to the given 2d char array.
/*
input: Hello
output: 
*/
#include<stdio.h>
#include<string.h>

#define MAX 20
void storeIn2d(char str[][MAX], int );
int main()
{
    char str[5][MAX]; 
    int n;
    printf("Enter number of string to enter N = ");
    scanf("%d",&n);   
    fflush(stdin);
    storeIn2d(str,n);

   
    for(int j=0;j<n;j++)   
        printf("%s\n",str[j]);

    return 0;
}
void storeIn2d(char str[][MAX],int size){
    
     for(int i=0;i<size;i++)
     {
            printf("Enter Name #%d : ",i+1);
            fgets(str[i],MAX,stdin);  
            str[i][strlen(str[i])-1]='\0';
     }
}