// Recursive fucntion to calculate factorial of a number.
#include<stdio.h>
int fact(int);
int main(){
    int x,result;
    printf("Enter a number = ");
    scanf("%d",&x);

    result=fact(x);
    printf("Factorial = %d",result);
    return 0;
}
int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}
