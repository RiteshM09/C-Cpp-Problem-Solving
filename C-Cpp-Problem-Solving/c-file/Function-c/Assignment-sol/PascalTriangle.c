// Write a functon to print PASCAL Triangle.
/*
//    1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 1 5 1010 5 1
1 6 1520 15 6 1

(a+b)^6 = a^6 + 6a^5b + 15a^4b^2 + 20a^3b^3 + 15a^2b^4 + 6ab^5 +1b^6
*/
#include<stdio.h>
void printPattern(int);
int Combination(int,int);
int fact(int);

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;

    return f;
}

int Combination(int n, int r){

    return  fact(n)/(fact(r)*fact(n-r));

}
/*
   *    i=1,j>=4 & j<=4 j=4
  * *   i=2,j>=3 & j<=5 j=3,5
 * * *  i=3,j>=2 & j<=6 j=2,4,6
* * * * i=4,j<=1 & j<=7 j= 1,3,5,7
    4   1 
   3 5 10
  2 4 6
 1 3 5 7
*/
void printPattern(int x){
    int i,j,k,r;
    for(i=1;i<=x;i++)
    {   k=1;
        r=0;
        for(j=1;j<=(x*2)-1;j++) 
        {
            if(j>=(x+1)-i && j<=(x-1)+i)
            {
                if(k){
                     printf("%2d",Combination(i-1,r));//n,r
                     r++;
                }
                     
                 else   
                    printf("  ");
            k=1-k;
            }
            else        
                printf("  ");
           
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter number of lines:");
    scanf("%d",&n);
    printPattern(n);
    return 0;
}