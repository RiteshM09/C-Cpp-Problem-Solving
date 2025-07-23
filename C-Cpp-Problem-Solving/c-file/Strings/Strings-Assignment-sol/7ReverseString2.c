#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ch;
    int i,len;

    printf("Enter a sting: ");
    fgets(str,50,stdin);

    str[strlen(str)-1]='\0';

    len=strlen(str);

    for(i=0;i<len/2;i++)// loop from i=0 to len/2
    {    
        ch=str[i];             // swap first and last index character using ch variable.
        str[i]=str[(len-1)-i]; // (len-1-i) for each index moving frm len-1, len-2 len-3 till (i<len/2)
        str[len-1-i]=ch;
    }    

    printf("\nPRINT %s",str);
    return 0;
}
