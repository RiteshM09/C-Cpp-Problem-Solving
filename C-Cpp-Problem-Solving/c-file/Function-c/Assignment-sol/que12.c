//Write a function to find next prime number of a given number. (TSRS)
// ex - input= 10 - 11
// ex2- input= 13 - 17

#include<stdio.h>
int Prime(int);
int NextPrime(int);
int main(){
    int n,next;
    printf("enter number = ");
    scanf("%d",&n);
    next=NextPrime(n);
    printf(" Next prime number after %d is =%d",n,next);
    return 0;
}
// function to find NextPrime using Prime funtion
int NextPrime(int a){
    int new=a+1;
    while(a){

        if(Prime(new))
            return new;
        new++;
    }
    return new;
}
// function to find no is prime or not
int Prime(int x){
    int i;
    for(i=2;i<x;i++)
        if(x%i==0)
            break;

    if(i==x)
        return 1;
    else 
        return 0;

}
//first step - find prime no. return 1 if Prime and 0 if notPrime.
// next step - to find a number after n which return 1(i.e prime ).
// used a fuct 
