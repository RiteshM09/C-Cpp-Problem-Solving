/*
1234321     i=1,  j<=4  || j>=4 (j<=5-i || j>=3+i) 
123 567     i=2,  j<=3  || j>=5 (j<=5-i || j>=3+i) 
12   67     i=3,  j<=2  || j>=6 (j<=5-i || j>=3+i) 
1     7     i=4,  j<=1  || j>=7 (j<=5-i || j>=3+i) 

*/


#include<stdio.h>
int main()
{
    int i,j,k;
  
    for(i=1;i<=4;i++)
    {

        for(j=1;j<=7;j++)
        {
            if(j<=5-i || j>=3+i)
                printf("%d",j);
            else    
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}