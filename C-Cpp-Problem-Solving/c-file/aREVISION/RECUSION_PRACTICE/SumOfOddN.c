// Recursive fucntion to calculate the sum of n odd natural numbers.
/* sum of n = n*n
input: 5
output:1+3+5+7+9 = 25

input: 8
output 1+3+5+7+9+11+13+15 = 64

1. READY function  --->  OddSum(n)  1+3+5....+(n-1)(n)

2. recursive case  --->  (2n-1)+OddSum(n-1) 1+2+3+4....+(n-1) (2n-1)
                         
3. base case (end) ---> n == 1
*/
#include<stdio.h>
int OddSum(int);
int main()
{
    int num;
    printf("Enter N : ");
    scanf("%d",&num);

    printf("Sum of Odd Natural Number == %d ",OddSum(num) );

    // printf("n natural n %d ",num);

    return 0;
}
int OddSum(int n)
{
    //base case
    if(n==1)
        return 1;
    //recursive case
    return (2*n-1)+OddSum((n-1));
    
}
// n=1 - (2*1-1) - 1

// n=5 - 9 + 64( sum of n-1 odd natural num ) 