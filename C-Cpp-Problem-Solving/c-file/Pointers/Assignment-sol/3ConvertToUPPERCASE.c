// Write a function to convert a given string into uppercase.
/*
input: 	"hello123"
output: "HELLO123"

input: 	"Test 123!"	
output: "TEST 123!"

input: 	""	
output: ""

*/
#include<stdio.h>
#include<string.h>
char* ConvertToUPPERCASE(char *str);
int main()
{
    char str[50],ch;
    printf("Enter a string: ");
    fgets(str,50,stdin);
    str[strcspn(str,"\n")]='\0';
    
    ConvertToUPPERCASE(str);    
    printf("%s",str);
    return 0;
}
char* ConvertToUPPERCASE(char *str)
{
    for(int i=0;str[i];i++)
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }

    return str;
}