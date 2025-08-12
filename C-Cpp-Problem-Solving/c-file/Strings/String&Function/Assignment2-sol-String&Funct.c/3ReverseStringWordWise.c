//Write a function to reverse a string word wise. (For example if the given string is
//"My name is Ritesh" then the resulting string should be "Ritesh is name My"
#include<stdio.h>
#include<string.h>
char* ReverseWords(char s[]);
char* trim(char s1[]);
char* ReverseFullString(char s[]);

int main()
{
    char str[50];
    printf("Enter a string:");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';  
    
    printf("Rev words:%s",ReverseWords(str));
    return 0;  
}
char* ReverseWords(char s[]){
    int i=0,start,end;
    char ch;
    trim(s);// trim leading spaces from both end
    ReverseFullString(s);// reverse the full string 
    // Reverse individual word
    
    while(s[i])
    {
        start=i;
        while(s[i] && s[i]!=' ' )
            i++;
        end=i-1;
        

        while(start<end)
        {
            ch=s[start];
            s[start]=s[end];
            s[end]=ch;
            start++;
            end--;
        }
            i++;
           
    }

    return s;

}
// trim leading space
// Reverse full string
// Reverse individual words
char* ReverseFullString(char s[]) //Function Reverse full string
{      
    int i=0,len,j;
    char ch;
    len=strlen(s);         
    for(i=0;i<len/2;i++)
    {
        ch=s[i];
        s[i]=s[(len-1)-i];
        s[(len-1)-i]=ch;
    }
    return s;

}

char* trim(char s1[])// --Hello--world--
{
    int i=0,len,j=0;
    while(s1[i]==' ')
        i++;
    
    for(j=0;s1[j];i++,j++)
        s1[j]=s1[i];
    
    s1[j] = '\0'; 
    
    for(len=j-1;len >= 0 && s1[len] == ' ';len--); //j=12

    s1[len+1]='\0';

    return s1;
}

 