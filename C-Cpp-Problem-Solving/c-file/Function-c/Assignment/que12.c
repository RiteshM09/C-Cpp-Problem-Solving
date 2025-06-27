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

int NextPrime(int a){
    int new=a+1;
    while(a){

        if(Prime(new))
            return new;
        new++;
    }
    return new;
}

int Prime(int x){
    int i=2,temp=0;
    
    if(x<=1) return 0;

        while(i<x/2){
            if(x%i==0){
            // printf("%d",x); 
            temp++;
            }
        i++;
        }

    if(temp==0)
        return 1;
    else
       return 0;

}
//first step - find prime no. return 1 if Prime and 0 if notPrime.
// next step - to find a number after n which return 1(i.e prime ).
// used a fuct 
