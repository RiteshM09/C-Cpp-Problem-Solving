// Find last character of string.
// Ritesh
// h
#include<stdio.h>
#include<string.h>
char LastCharacter(char s[]);
int main()
{
                // 0   1   2   3   4   5   0  0  0  0
    char ch,str[20];// string array 
    int i;
    printf("Enter name: ");
    fgets(str,20,stdin);

    str[strlen(str)-1]='\0';
    ch = LastCharacter(str); 
    //  for(i=0;str[i];i++);
    printf("Print last character: %c",ch);
    printf("\n");
    return 0;
}
char LastCharacter(char s[])//ex: length(Ritesh) = 0123456
{
    return s[strlen(s)-1];// ex: s[6-1] - s[5] - 
}   
