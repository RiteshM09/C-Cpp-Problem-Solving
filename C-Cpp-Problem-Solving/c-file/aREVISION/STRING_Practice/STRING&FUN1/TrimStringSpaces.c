// 2. Write a function to trim a string (removing leading spaces from both the ends).
/*
Input: " hello world "
Output: "hello world"

Input:  "   ANT"
Output: "ANT"
*/
#include<stdio.h>
#include<string.h>
char* TrimSpaces(char []);
int main()
{
    char str[50],ch;
    printf("ENTER String : ");
    fgets(str,50,stdin);

    // adjust delimiter
    str[strlen(str)-1]='\0';
    printf("\n");
    printf("NO. of Words =%s",TrimSpaces(str));
    
    return 0;
}
char* TrimSpaces(char s[])
{
    int i=0,j;
    while(s[i]==' ') // trim from statring, increment i
        i++;

    for(j=0;s[j];j++)// swap s[i] to s[j] index's
    {
        s[j]=s[i];
        i++;
    }
    int len;
    len=strlen(s)-1;      // 012345
                          // hello\0
    for(j=len;s[j]==' ';j--){// - HERE i did blunder, forgot to evaluate s[j] condition correctly did s[j]!=' ' instead
        s[j]='\0';
    }

    return s;
}
// mistake done - at last j loop, i forgot to evaluate s[j]
