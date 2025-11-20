// remove non-Alphanumeric characters.
// i/p : s = "A man, a plan, a canal: Panama"
// o/p : s = "AmanaplanacanalPanama"
#include<stdio.h>
#include<string.h>
int main()
{ 
    int i;
    char ch,str[]="HELL0";
    // fgets(str,50,stdin);

    // str[strlen(str)-1]='\0'; // removed delimiter \n

    // reverse the string hello
    int len=strlen(str);
    //H E L L O - H E  
    for(i=0;i<len/2;i++)
      {
        ch = str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=ch;
      }

    //str[i] = '\0'; // add null at last position  
    printf("\n REVERE : %s",str);
    return 0;
}