/*
ABCDE
 ABCD
  ABC
   AB
    A

12345   i=1 ,j<=5 6-1 j>=1 12345 234 
 1234   i=2 ,j<=4 6-2 j>=2
  123   i=3 ,j<=3 6-3 j>=3
   12   i=4 ,j<=2 6-4 j>=4
    1   i=5 ,j<=1 6-5 j>=5

*/
#include<stdio.h>
int main()
{
    int i,j;
    char k;
    
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=5;j++) 
        {
            if(j>=i)   
            {
                printf("%c",k);
                k++; 
            }  
             
            else
             printf(" ");
        }
        printf("\n");
    }
    

    return 0;
}
/*

12345
-2345
--345
---45
----5

*/