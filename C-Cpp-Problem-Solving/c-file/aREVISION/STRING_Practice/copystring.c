//Write a program in C to copy one string to another char array. without using strcpy()
/*
input: enter a sting: HEllO
output: copied string: HEllO
*/ 
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50];

    printf("Enter a string: ");
    fgets(str1,50,stdin);

    str1[strlen(str1)-1]='\0';  

    int i=0;
    while(str1[i]){
        str2[i]=str1[i];
    i++;
    }
    str2[i]='\0';
    printf("string 2 : %s",str2);
}