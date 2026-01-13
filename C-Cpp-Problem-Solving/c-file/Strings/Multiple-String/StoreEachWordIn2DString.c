// 4. Write a function to store each word a string in a 2 dimensional char array.
/*
input string : hello
output 2d string : s[0][20] = hello
                   s[1][20] = this
                   s[2][20] = is
                   s[3][20] = ritesh
                   s[4][20] = \0

*/
#include<stdio.h>
#include<string.h>
#define MAX 100
int coutwords(char str[MAX]);
void TrimSpaces(char str[MAX]);
void StoreStringWord(char [MAX], char word[20][MAX]);
int main()
{
    char s[MAX];
    char w[20][MAX];
    printf("enter a string : ");
    fgets(s,MAX,stdin);
    s[strlen(s)-1]='\0';
    TrimSpaces(s);
    StoreStringWord(s,w);
    
    
    return 0;
}
void StoreStringWord(char str[MAX], char word[20][MAX]){// hell0 
    // string :: "hello 
    //this 
    //is 
    //ritesh"
   
    int i=0;
    while (str[i] == ' ')
            i++;

    int count = coutwords(str);

    // word[0][20] = str[0,1,2,3,4,\0]
    // word[1][20] = str[0,1,2,3,4,\0]
    
    // word[j][k++] = str[i++];

    int j=0,k=0;
    for(i=0;str[i];i++,k++)
    {
        if(str[i]!=' ')
        {
            word[j][k]=str[i];

        }
        else if(str[i]==' ')
        {
            word[j][k]='\0';
            j++;
            // handling overflow of string 
            if (j >= count) break; // stop j when greater than 5, i.e 0,1,2,3,4
            
            k=-1; // as k will increment after this condition soo set k=-1, so next becomes k=0
        }
        
    }
    
    // at last position
    if(j<count)
    word[j][k]='\0';

    for(int d=0;d<count;d++)
        printf("%s\n",word[d]);
}
int coutwords(char str[MAX])
{
    
    int i=0;
    int count=0,inword=0;

    // "hello this is ritesh"

    while(str[i]!='\0')
    {
        if(str[i]!=' ' && inword==0 )// detect start of word
        {
            count++;
            inword=1;
        }
        else if(str[i]==' ')
        {
            inword=0;
        }
      i++;
    }
   
    return count;
}
void TrimSpaces(char str[MAX]){
    // if (str[i] == '\0')
    // {
    // str[0] = '\0';
    //  return 0;
    // }

    //starting 
    int i=0;
    while(str[i]==' ')
        i++;

    // leading 
    int len=strlen(str);
    for(int j=len-1;j>i;j--) //not j should be greater than i 
    {
        if(str[j]!=' ')
        {
              str[j+1]='\0';// place null after non-spacing char
              break;
        }
    }
    // i is at starting non space char;
    // j is at leading  non space char;
    int write=i;
    while(str[i]!='\0')
    {
        if(str[i]!=' ') // if its a non space keep it
        {
            str[write]=str[i];
            write++;
            i++;
        }
        else if(str[i]==' ' && str[i-1]!=' ') // if its space and prev index is non space keep it
        { 
            str[write]=str[i];
            write++;
            i++;
        }     
        else
            i++; 
    }
    str[write]='\0';
}