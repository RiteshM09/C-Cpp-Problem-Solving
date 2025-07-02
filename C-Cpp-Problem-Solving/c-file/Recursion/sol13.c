// Write a recursive function to print octal equivalent of a given decimal number
// function           -           void DtoOctal(n) -  8 (1 0) - printing will be 0 1
// Recursion case     -           void DtoOctal(n/8)printf("%d",n%8); - 8 - (0)1 
// base case          -  when n is 0
/* 
ex:
    83 ÷ 8 = 10 remainder 3
    10 ÷ 8 = 1 remainder 2
    1 ÷ 8 = 0 remainder 1 (print this first)
*/

#include<stdio.h>
void  DtoOctal(int);
int main()
{
    int N;
    printf("Enter N = ");
    scanf("%d",&N);
  
    printf("Ocatal of %d = ",N);
 
    DtoOctal(N);
    printf("(Base-8)");
}
void DtoOctal(int n)
{
    if(n>0)
    {
        DtoOctal(n/8);
        printf("%d ",n%8);
    }
}
