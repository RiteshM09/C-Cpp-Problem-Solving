// 2. Write a function to trim a string (removing leading spaces, compress the multiple mid-spaces into 1 space & also remove trailing spaces ).
/*
Input: " hello world "
Output: "hello world"

Input: "hell    no "
Output: "hell no"

Input:  "   ANT"
Output: "ANT"
*/
#include<stdio.h>
#include<string.h>
char* TrimSpaces(char []);
int main()
{
    char str[100],ch;
    printf("ENTER String : ");
    fgets(str,100,stdin);

    // adjust delimiter
    str[strlen(str)-1]='\0';
    printf("\n");
    printf("string :%s",TrimSpaces(str));
    
    return 0;
}
char* TrimSpaces(char s[])
{
    int i=0,j=0,len;
    len=strlen(s);
    // for empty string
     if (i == len) {
        s[0] = '\0';
        return s;
    }

    // remove leading spaces
    while(s[i]==' ') // trim from statring, increment i
        i++;
    // compress mid spaces
    while(s[i]!='\0'){

        if(s[i]!=' '){ //if char is non-space
            s[j]=s[i];
            j++;
        } 
        else {// if char is space
            if(j>0 && s[j-1]!=' '){// check if prev char write(i/j) char is non-space then only shift space otherwise not  
                 s[j]=' '; 
                 j++;  // increment j only to shif space other wise dont
            }
              
        }
        i++;
    }
    // j is at j-1 index & i is at '\0'


     // remove trailing spaces
     // j is after last char index ex: hello-bro-  ;  j is at 10th index 
                               //      012345678910
    j=j-1;
    for(;s[j-1]==' '&& j>0;j--);// last char is j-1 i.e 9th index

    s[j]='\0';// place null after last character/after last index

    // remove spaces in between
    
    return s;

   


}
// mistake done - at last j loop, i forgot to evaluate s[j]
