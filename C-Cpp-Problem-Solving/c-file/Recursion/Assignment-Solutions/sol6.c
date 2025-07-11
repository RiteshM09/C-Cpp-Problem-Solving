// 6. Write a recursive function to print first n odd natural numbers in reverse order
// function             OddRev(n)   - 2n-1.(2n-3..2n-5....1 9 7 5..3.1)
// R.C                  printf(2n-1).OddRev(n-1) -
// B.C                  n - 0

// ex: 5
// 9 7 5 3 1 
#include<stdio.h>
void OddRev(int);
int main(){
    int x;
    printf("Enter N==");
    scanf("%d",&x);
    
    printf("Odd %d Natural Numbers in Reverse order are: ",x);
    OddRev(x);
    
    return 0;
}
void OddRev(int n){
    if(n>0){
        printf("%d ",2*n-1);
        OddRev(n-1);
    }
}
