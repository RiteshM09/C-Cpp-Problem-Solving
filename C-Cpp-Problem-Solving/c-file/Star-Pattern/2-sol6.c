/*
1    i=1 ,j=1     j=1   j<=1 
21   i=2 ,j=21    j=21  j<=2  
321  i=3 ,j=321   j=321  j<=3
4321 i=4 ,j=4321  j=4321 j<=4 
*/

#include<stdio.h>
int main()
{
    int i,j,k=0;

    for(i=1;i<=4;i++)
    {
        
        for(j=i;j>=1;j--) //i=4 ,j=1 ,1>=1
        {
            
            if(j<=i)   
                printf("%d",j);
            else
                printf("-");
            
        }
        printf("\n");
    }
    return 0;
}
// 1
// 21 
// 321
// 4321

