/*
1
12
123
1234

sol - 2

*/
#include<stdio.h>
int main()
{
    int i,j,k; 

    for(i=1;i<=4;i++)
    {
        k=i;           
        for(j=1;j<=4;j++) 
        {
            if(j<=i){ 
                printf("%d",k);
                k--;
            }       
            else
                printf("-");
            
        }
        printf("\n");
    }
    return 0;
}
