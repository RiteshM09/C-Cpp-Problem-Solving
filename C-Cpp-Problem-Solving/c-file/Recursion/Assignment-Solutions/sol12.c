// Write a recursive function to print binary equivalent of a given decimal number
// function         -       void DecimalToBinary(n) -         12 -  1100,  12/2 - 110(1)
// Recursion F      -       printf(n%2) BinaryofN(n/2)       
// Base case        -       if(n>1) return n

//ex: 0 - 0, 1 - 1, 2 - 10, 3 - 11,  4 - 100, 5 101, 6 - 110, 7 - 111, 8 - 1000
#include<stdio.h>
void DecimalToBinary(int);
int main(){
    int N;
    printf("Enter N = ");
    scanf("%d",&N);
    
    printf("Binary of N is  = ");
    DecimalToBinary(N);
    return 0;
}
void DecimalToBinary(int n){

    if(n>0)
    {
     DecimalToBinary(n/2);
     printf("%d ",n%2);  

    }  
}