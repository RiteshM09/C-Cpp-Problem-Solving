/*
ABCDEFG
 ABCDE
  ABC
   A
*/
/*
1234567 i=1 j=1-7   j>=1 && j<=7 j>=i && j<=8-i
 12345  i=2 j=2-6   j>=2 && j<=6
  123   i=3 j=3-5   j>=3 && j<=5
   1    i=4 j=4     j>=4 && j<=4
*/
#include<stdio.h>
int main()
{
    int i,j;
    char ch;
 
    for(i=1;i<=4;i++)
    {
        ch='A'
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i){
                printf("%c",ch); 
                ch++;
        }
            else    
                printf(" ");

        }
        printf("\n");
    }
    return 0;
}