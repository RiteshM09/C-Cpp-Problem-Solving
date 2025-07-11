// 5. Write a recursive function to print first n odd natural numbers
// Ready Function  -           PritOdd(n) - 1 3 5.. ..2n-3 .2n-1
// Recursive Case -  PrintOdd(n-1).printf("%d",2n-1) - (1 3 5.. ..2n-3)
// Base Case      -  n - 0 
// ex: 5 
// 1 3 5 7 9
// ex2: 10
//1 3 5 7 9 11 13 15 17 19
#include<stdio.h>
void PritOdd(int);
int main()
{
    int x;
    printf("Enter a N = ");
    scanf("%d",&x);

    PritOdd(x);
}
void PritOdd(int n){
    if(n>0){
        PritOdd(n-1);
        printf("%d ",2*n-1);
    }
}

