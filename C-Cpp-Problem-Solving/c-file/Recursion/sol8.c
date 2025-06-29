//Write a recursive function to calculate sum of first n even natural numbers
// Function     -           SumOfEvenN(n) - 2+4+6+..2n-2.2n
// R.C          -         return 2*n+SumOfEvenN(n-1) - (2+4+6+..2n-2).
// B.C          -   n==1 return 2
//Ex - 5
// 30
#include<stdio.h>
int SumOfEvenN(int);
int main(){
    int x,Result;
    printf("Enter N = ");
    scanf("%d",&x);

    printf("Sum of First %d even natural number are =",x);
    Result=SumOfEvenN(x);
    printf("%d",Result);
    return 0;
}
int SumOfEvenN(int n){
    if(n==1)
        return 2;
    return 2*n+SumOfEvenN(n-1);
}