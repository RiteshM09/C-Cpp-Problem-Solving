/*
1           i=1,j<=1, j<=i
12          i=2,j<=2
123         i=3,j<=3
1234        i=4,j<=4
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(j<=i)
                printf("%d",j);
            else    
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}