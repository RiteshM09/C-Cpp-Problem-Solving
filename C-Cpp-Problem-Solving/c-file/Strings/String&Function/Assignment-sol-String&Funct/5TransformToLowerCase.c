// write a function to compare 2 string without using inbuilt function.
/*
input: HELLo
Output: hello
*/
#include<stdio.h>
#include<string.h>
void TransformTOLowercase(char s[]);
int main()
{
    char str[50];
    int result;
    printf("Enter 1st String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    TransformTOLowercase(str);
    printf("New string: %s",str);
    return 0;

}
void TransformTOLowercase(char s[])
{
    int i;
    for(i=0;s[i];i++)
        if(s[i]>='A'&& s[i]<='Z')
            s[i]=s[i]+32;
}

