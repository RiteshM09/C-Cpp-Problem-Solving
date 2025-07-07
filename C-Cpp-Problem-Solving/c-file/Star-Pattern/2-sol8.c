/*
1      i=1 ,j=1     j>=1   j<=1   
23     i=2 ,j=23    j>=2   j<=3
456    i=3 ,j=456   j>=4   j<=6
78910  i=4 ,j=78910 j>=7   j<=10
*/

// 1
// 23
// 436
// 78910

#include<stdio.h>
int main()
{
    int i,j,k=1;

    for(i=1;i<=4;i++)
    {
        
        for(j=1;j<=5;j++)
        {
            if(j<=i){
                printf("%d",k);
                k++;
                }
            else    
                printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
