/*
ABCDCBA     
ABC CBA
AB   BA
A     A
*/

// 1234321 1234 567
// 123_321
// 12___21
// 1_____1


#include<stdio.h>
int main()
{
    int i,j;
  
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j<=5-i )
                printf("%d",j);
            else    
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}