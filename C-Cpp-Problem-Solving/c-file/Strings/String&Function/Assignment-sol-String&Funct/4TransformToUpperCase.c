// write a function to transform to Upper case
/*
input: Hello
output: HELLO

*/
#include<stdio.h>
#include<string.h>
void TransformtoUPPERCASE(char s[]);
int main()
{
    char str1[50];
    int result;
    printf("Enter String: ");
    fgets(str1,50,stdin);
    str1[strlen(str1)-1]='\0';

    TransformtoUPPERCASE(str1);
    return 0;
}
void TransformtoUPPERCASE(char s[])
{
    int i=0;
    
    for(i=0;s[i];i++)
        if(s[i]>'a' && s[i]<'z') 
            s[i]=s[i]-32;

    printf("String : %s",s);

}