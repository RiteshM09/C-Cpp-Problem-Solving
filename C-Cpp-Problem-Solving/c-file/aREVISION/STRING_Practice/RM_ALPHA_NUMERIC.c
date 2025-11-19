// remove non-Alphanumeric characters.
// i/p : s = "A man, a plan, a canal: Panama"
// o/p : s = "AmanaplanacanalPanama"
#include<stdio.h>
#include<string.h>
int main()
{ 
    int i,j;
    char str[50]="A man, a plan, a canal: Panama";
    // fgets(str,50,stdin);

    // str[strlen(str)-1]='\0'; // removed delimiter \n
    i=0,j=0;
    while(str[i])
    {
        // alpha numeric character..
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9' ) )
        { 
            str[j]=str[i];
            j++;
        }

        i++;

    }
    str[j] = '\0'; // add null at last position  
    printf("\n ALPHA_NUMERIC, output : %s",str);
    return 0;
}