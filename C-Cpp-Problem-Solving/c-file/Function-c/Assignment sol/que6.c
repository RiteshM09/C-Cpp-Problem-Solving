// Write a function to calculate sum of squares of first n natural numbers. (TSRS)
#include<stdio.h>
int SumofSq(int);
int main()
{
    int n,R;
    printf("Enter n = ");
    scanf("%d",&n);
    R=SumofSq(n);
    printf("\nSum of square  = %d ",R);
    return 0;
}

int SumofSq(int x){
    int s=0,i,t;
    printf("Squares are = ");
    for(i=1;i<=x;i++)
    {
        t=i*i;
        printf("%d ",t);
        s=s+t; 
    }
    return s;
}

// 2
// n - 1 2
// sum of n - 3
// sq -  1 4 
// sum of sq = 5

// 5
// n - 1 2 3 4  5
// sum - 15
// sq- 1 4 9 16 25 
// sum of sq - 55

// 10 
// n - 1 2 3 4 5 6 7 8 9 10
// sum - 55
// sq - 1 4 9 16 25 49 81 100
// sum of sq - 285