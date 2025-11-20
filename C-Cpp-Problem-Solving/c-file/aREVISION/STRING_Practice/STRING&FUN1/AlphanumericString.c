//Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string contain at least one alphabet(upper case, lower case) and one digit only no special character )
/*
1 input: Hello
  Output: No

2 input: Hello123
  Output: Yes

3 input: Hello@123
  Output: No
*/
#include<stdio.h>
#include<string.h>
int Check_Alphanumeric(char* s);
int main()
{
    char str[50];
    printf("Enter String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';
    if(Check_Alphanumeric(str))
        printf("ALPHA numeric");
    else 
        printf("NOT");

    return 0;
}
int Check_Alphanumeric(char* s){
    int HasChar=0,HasDigit=0,i=0;

    while(s[i]){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            { HasChar=1; }
        else if (s[i]>='0' && s[i]<='9')
           { HasDigit=1;  } 
        // else
        //    { return 0; }
        i++;
    }

    if(HasChar==1 || HasDigit==1)
        return 1;
    else 
        return 0;
}