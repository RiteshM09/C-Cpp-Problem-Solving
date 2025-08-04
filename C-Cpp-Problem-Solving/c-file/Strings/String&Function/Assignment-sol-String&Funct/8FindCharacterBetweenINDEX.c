//Write a function to find character in a given string between specified indices (start
//index (inclusive) and end index(exclusive)
/*
input: hello
start index = 0  end index = 3
character to search: l
output: l found at index 2 
        l found at index 3
*/
#include<stdio.h>
#include<string.h>
void findCharacter(char s[],int star,int end,char ch);
int main()
{
    char str[50],ch;
    int s,e;

    printf("Enter String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    printf("Enter Start index: ");
    scanf("%d",&s);
    printf("Enter  end  index: ");
    scanf("%d",&e);

    printf("Enter character to search:");
    scanf(" %c",&ch);

    if(s>=e || s<0 || e>strlen(str))// edge cases 
        printf("INVALID INPUT");
    else
        findCharacter(str,s,e,ch);
   

    return 0;
}
void findCharacter(char str[],int start,int end,char ch){
    int i;
        if(ch!=str[i])
            printf("Character not found "); // edge case if character not present
        else 
        {
            for(i=start;i<str[end];i++)
            {
                if(ch==str[i])
                    printf("\nCharacter %c found at index %d ",ch,i);  
            }  
        }
         
        
}