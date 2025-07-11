// Write a recursive function to calculate sum of first n natural numbers
// function         -   SumOfN(n) - 5 1+2+3..(n-1).n
// R.C              -  return n+SumOfN(n-1) 5 1+2+3+(n-1)
// B.C              -  return 1 
//ex: 5
//sum - 15
// 6 - sum - 21
#include<stdio.h>
int SumOfN(int);
int main(){
    int x,result; 
    printf("Enter N = ");
    scanf("%d",&x);

    result=SumOfN(x);
    printf("%d",result);
    return 0;
}
int SumOfN(int n){
    if(n==1)
        return 1;
    return n=n+SumOfN(n-1);
}