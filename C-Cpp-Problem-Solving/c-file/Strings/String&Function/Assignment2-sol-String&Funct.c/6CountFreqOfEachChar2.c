// Write a function to count frequency of each character of the given string.(case sensitive)
/*
input : Cat
     
output: C:1
      : a:1
      : t:1

input : Hello 
output: H:1
        e:1
        l:2
        o:1

input : AaBbAa
      
output: A:2
        a:2
        B:1
        b:1 

*/ 
#include<stdio.h>
#include<string.h>
void Count_Each_Char(char str[]);
int main()
{
    char str[50];

    printf("Enter a String: ");
    fgets(str,50,stdin);    
    str[strlen(str)-1]='\0'; 
    Count_Each_Char(str);

    return 0;
}
void Count_Each_Char(char s[]){
    int i, freq[128]={0};

    for(i=0;s[i]!='\0';i++) 
        freq[s[i]]++;

    for(i=0;i<128;i++)
        if(freq[i]!=0)
            printf("frequcency of %c is : %d \n",i,freq[i]);

}
