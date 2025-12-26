// 11. Write a recursive function to calculate 
// sum of digits of a given number
/*
input : 132
sumofD: 6

input : 0
sumofD: 0


Ready function -->  DigitSum(n)   - n
Recursive case -->  DigitSum(n-1) - (n/10). (n)
                    n=(413)         (4+1) . (4+1+3)

                    n-1  + n 
                   (4+1) + n%10 (3)
base case --> n==0 
*/
#include<stdio.h>
int DigitSum(int);
int main()
{
    int num;
    printf("Enter N : ");
    scanf("%d",&num);

    printf("Sum of Digit == %d ",DigitSum(num) );


    return 0;
}
int DigitSum(int n)
{
    //base case
    if(n==0)
        return 0;

    //recursive case
    return n%10+DigitSum(n/10);

}
//   if(n>0)  ❌ because, when  digit = 0 output should be = 0

// ∴ if(n==0) ✅ return 0 base case is needed, to handle 0
