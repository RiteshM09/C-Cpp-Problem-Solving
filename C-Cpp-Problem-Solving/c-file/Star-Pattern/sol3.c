/*
To genralize for n number of rows change condition (i and j, n insted of 4 ) .
        *   i=1 j=4        j>=4 5-i     j<=4
       **   i=2 j=34       j>=3 5-i     j<=4
      ***   i=3 j=234      j>=2 5-i     j<=4
     ****   i=4 j=1234     j>=1 5-i     j<=4
*/
#include<stdio.h>
int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j>=5-i)
                printf("*");
            else        
                printf(" ");
        }
        printf("\n");

    }

    return 0;
}

// ___*
// __**
// _***
// ****

