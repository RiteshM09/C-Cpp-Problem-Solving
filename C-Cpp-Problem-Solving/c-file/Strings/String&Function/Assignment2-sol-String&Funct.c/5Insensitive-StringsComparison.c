// Write a function to do case-insensitive comparison of two strings.
/*
input : Ant
      : anT
output: Strings are equal

input : Hello 
      : heLLo
output: Strings are equal

input : bat
      : cat 
output: Strings are Not equal  

*/
// convert both the case's into same case  
// then do comparing
#include<stdio.h>
#include<string.h>
int Case_Insensitive_comparision(char s1[],char s2[]);
int main()
{
    char str1[50],str2[50];
    printf("Enter string 1:");
    fgets(str1,50,stdin);
    str1[strlen(str1)-1]='\0';  

    printf("Enter string 2:");
    fgets(str2,50,stdin);
    str2[strlen(str2)-1]='\0'; 
    if(Case_Insensitive_comparision(str1,str2))
        printf("Equal:%d",Case_Insensitive_comparision(str1,str2));
    else
        printf("Not Equal:%d",Case_Insensitive_comparision(str1,str2));
    
    return 0;  
}
int Case_Insensitive_comparision(char s1[],char s2[])
{   
    int i;  
        // string 1 convert to lower case 
    for(i=0;s1[i];i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
            {
                s1[i]=s1[i]+32;
            }
    }
    // string 2 convert to lower case 
    for(i=0;s2[i];i++)
    {
        if(s2[i]>='A' && s2[i]<='Z')
            {
                s2[i]=s2[i]+32;
            }
    }
    // compare both string
    i=0;
    while(s1[i]!='\0' && s2[i]!='\0')
    {
        // if found non equal
        if(s1[i]!=s2[i])
            return 0;
        i++;
    }
    // if loop is complete, it means both are equal
    if(s1[i]==s2[i])
        return 1;
    else    
        return 0;

  
}
 