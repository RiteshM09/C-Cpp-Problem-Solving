//Write a program in C to count the total number of alphabets, 
//digits and special characters in a string.
/* 
input : Hello_World@123
output: Alphabets: 10
        Digits: 3
        Special Characters: 2
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];

    printf("Enter a string: ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';   

    int i=0, Alpha=0, Digit=0, special=0;

    while(str[i]) {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') )
            Alpha++;
        else if(str[i]>='0' && str[i]<='9')
            Digit++;
        else
            special++;

        i++;
    }
    printf("ALPABETS : %d \n DIGITS: %d \n SPECIAl Character : %d",Alpha,Digit,special);
   
}