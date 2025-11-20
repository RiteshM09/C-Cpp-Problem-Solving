//Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string must contain at least one alphabet and one digit)
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
int Check_Alphanumeric(char s[]);
int main()
{
    char str[50];
    printf("Enter String: ");
    fgets(str,50,stdin);
    str[strlen(str)-1]='\0';

    if(Check_Alphanumeric(str))
        printf("True");
    else    
        printf("False");

    return 0;

}
int Check_Alphanumeric(char s[])
{
    int i,HasAlpha=0,HasDigits=0;
    for(i=0;s[i];i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
            HasAlpha=1;
        }
        else if(s[i]>='0' && s[i]<='9'){
            HasDigits=1;
        }
        else{
            return 0;    //character is neither alpha nor digit  
        } 
           
    }
    if(HasAlpha==1 || HasDigits==1)   
        return 1;
    else
        return 0;
}

// User123	    Valid	    Contains only letters and numbers.
// SecureP@ss	Non-Valid	Contains the special character @.
// FileName_A	Non-Valid	Contains an underscore _.
// Address 45	Non-Valid	Contains a space .
// 0800Number	Valid	    Contains only digits and letters.
// A!B@C#D	    Non-Valid	Contains multiple special characters (!, @, #).