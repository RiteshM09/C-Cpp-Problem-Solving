/*
ABCDCBA
 ABCBA
  ABA
   A
*/
/*
1234321     i=1, j=1-7  j>4 k-- j>5-i
 12321      i=2, j=2-6  j>3 k-- j>5-2
  121       i=3, j=3-5  j>2 k--
   1        i=4, j=4    j>1 k--
*/  
/*
j values:
1234567
 23456 
  345  
   4   
*/
#include<stdio.h>
int main()
{
    int i,j;
    char ch;
   

    for(i=1;i<=4;i++)
    {
        ch='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                 printf("%c",ch);
                 if(j>=4)
                    ch--;
                else
                    ch++;
            }
               
            else    
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}