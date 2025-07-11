//Write a recursive function to calculate sum of squares of first n natural numbers
// function         -         SumOfSq(n) - n - 1^2+2^2..+n^2+..(n-1)*(n-1) + n*n
// R.C              -         SumOfSq(n-1) - n*n+(1^2+2^2..+n^2+..(n-1)*(n-1)) 
// B.C              -         i==0

//ex: 5 - 1^2+2^2+3^2+5^2 - 1+4+9+16+25 -  55

//ex: 10  
//sq - 1 4 9 16 25 49 81 100 
//sum of sq - 285
#include<stdio.h>
int SumOfSq(int);
int main(){
    int N,Result;
    printf("Enter N=");
    scanf("%d",&N);

    Result=SumOfSq(N);
    printf("Sum Square of first %d natural No. are = %d",N,Result);
}
int SumOfSq(int n){
    if(n==1)
        return 1;
    return (n*n)+SumOfSq(n-1);
}



