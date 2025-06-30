//Write a function to find next prime number of a given number. (TSRS)
// ex - input= 10 - 11
// ex2- input= 13 - 17
#include<stdio.h>
int NextPrime(int);
int main(){
    int n,next;
    printf("enter number = ");
    scanf("%d",&n);
    next=NextPrime(n);
    printf(" Next prime number after %d is =%d",n,next);
    return 0;
}
int NextPrime(int x){
    int i,j;
    for(i=x+1;;i++){

        for(j=2;j<i;j++){
            if(i%j==0)
               break;
        }
        if(j==i){ 
            return i;
            break;
        }
    }
}   
