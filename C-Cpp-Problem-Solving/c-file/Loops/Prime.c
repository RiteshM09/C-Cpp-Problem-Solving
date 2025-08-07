// Check No. is prime or not
//Prime: divisible by 1 and itself only 
// and it must be a natural no.(2,3,5,7,11,13,17,19,23)
/*
5  Prime
4  Not Prime
23 Prime
19 prime
18 Not Prime
*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=2;i<=n-1;i++) 
        if(n%i==0)
            break;
    
    if(i==n)// if loop is completed then no. is not divisible by any 
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}

