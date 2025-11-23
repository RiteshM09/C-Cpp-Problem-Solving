// Write a function to count words in a given string
/*
input: Hello World
output: 2

input: ""  
input: " "
output: 0

input: all is well
output: 3

input: A 
output: 1
*/
#include<stdio.h>
#include<string.h>
int WordCount(char []);
int main()
{
    char str[50],ch;
    printf("ENTER String : ");
    fgets(str,50,stdin);

    // adjust delimiter
    str[strlen(str)-1]='\0';
    printf("\n");
    printf("NO. of Words = %d",WordCount(str));
    
    return 0;
}
int WordCount(char s[])
{
    int i=0,count,flag=0;
    // if space found at starting then increment i till non space char
    while(s[i]==' ')
        i++;
    // i is non space character
    for(count=0;s[i];i++)
    {
        while(s[i]!=' ' && s[i])//should be in bound 
        {
            flag=1;
            i++;  
        }

        if(flag>0)
        {
            count++;
        }

        if(s[i] && s[i]==' ')
            flag=0;
    }

    return count;
}

// "ritesh" 1
// "hell no" 2
// " "       0
// " A B C " 3
//  while(s[i])//hell no  
//     {
//         if(s[i]==' ')
//             break;
       
//         while(s[i]!=' '){
//              i++;
//             flag=1;
//         }
//         if(flag>0){
//             count++; 
//             flag=0;
//         }
//         i++;
//     }
    
//     return count;