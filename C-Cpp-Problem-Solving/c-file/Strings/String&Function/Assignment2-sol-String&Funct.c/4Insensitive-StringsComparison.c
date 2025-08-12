// Write a function to do case insensitive comparison of two strings.
// Write a function to count words in a given string
/*
input : Ant
      : anT
output: Strings are equal

input : Hello 
      : HeLLo
output: Strings are equal

input : bat
      : cat 
output: Strings are Not equal  

*/
#include<stdio.h>
#include<string.h>
int Insensitive_comparision(char s1[],char s2[]);
int main()
{
    char str1[50],str2[50];
    printf("Enter string 1:");
    fgets(str1,50,stdin);
    str1[strlen(str1)-1]='\0';  

    printf("Enter string 2:");
    fgets(str2,50,stdin);
    str2[strlen(str2)-1]='\0'; 
    
    printf("output:%d",Insensitive_comparision(str1,str2));
    return 0;  
}
int Insensitive_comparision(char s1[],char s2[])
{   
    int i,j;  
    for(i=0,j=0;s1[i] && s2[j];i++,j++)
    { // Ant ant
        if(((s1[i]>='a' && s1[i]<='z') || (s1[i]>='A' && s1[i]<='Z') ) && ((s2[j]>='a' && s2[j]<='z') || (s2[j]>='A' && s2[j]<='Z') ))
        {
            
            if(s1[i]==s2[j])
                return 1;
        }
        return 0;
    }
    

}


 