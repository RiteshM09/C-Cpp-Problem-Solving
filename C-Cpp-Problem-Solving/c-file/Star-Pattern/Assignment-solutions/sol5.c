/*
    *           i=4 j=4             j>=4 & j<=4  j>=5-1 &  j<=3+i 
   ***          i=3 j=345           j>=3 & j<=5  j>=5-2 &  j<=3+i
  *****         i=2 j=23456         j>=2 & j<=6  j>=5-3 &  j<=3+i
 *******        i=1 j=1234567       j>=1 & j<=7  j>=5-4 &  j<=3+i
*/
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=3+i && j>=5-i)
                printf("*");
            else    
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
