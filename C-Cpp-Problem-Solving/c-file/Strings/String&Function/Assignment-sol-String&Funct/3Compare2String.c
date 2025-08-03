// write a function to compare 2 string without using inbuilt function.
/*
1st string: abc
2nd string: abc
Output: Strings are equal.

1st string: abc
2nd string: abd
Output: Strings 2nd is greater

1st string: abd
2nd string: abc
Output: Strings 1nd is greater
*/
#include<stdio.h>
#include<string.h>
int CompareString(char str1[], char str2[]);
int main()
{
    char str1[50], str2[50];
    int result;
    printf("Enter 1st String: ");
    fgets(str1,50,stdin);
    str1[strlen(str1)-1]='\0';

    printf("Enter 2st String: ");
    fgets(str2,50,stdin);
    str2[strlen(str2)-1]='\0';

    result=CompareString(str1,str2);
    if(result==1)
        printf("string 1 is greater");
    else if(result==-1)
        printf("String 2 is greater");
    else        
        printf("Both Strings are equal");

    return 0;

}
int CompareString(char s1[], char s2[])
{
    char ch;
    int i=0;
    while(s1[i]!='\0' && s2[i]!='\0') //compare each character
    {
        if(s1[i]>s2[i])
            return 1;
        else if(s1[i]<s2[i]) 
            return -1;
        i++;// more to next
    }
    // You should only return 0 after comparing all characters.
     if (s1[i] == '\0' && s2[i] == '\0')// compare if both strings are equal
        return 0;      
    else if (s1[i] == '\0') // compare if s1 lenght is greater 
        return -1;    
    else
        return 1; // s2 length is greater
    
    return 0;
    
}

