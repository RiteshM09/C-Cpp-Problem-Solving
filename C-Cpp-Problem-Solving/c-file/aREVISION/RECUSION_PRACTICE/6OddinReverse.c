// Write a recursive function to print first 
// n even natural numbers in reverse order.
/*
input: 5
output:9 7 5 3 1

input: 3
output 5 3 1

1. Ready function  --> OddN( n )   9 7 5. ...1 

2. recursive case  --> OddN(n-1) 
                       (2(n-1)-1 2(n-2)-1 2(n-3)-1) ....... 5 3 1)
                    

3. base case (end) --> n>0
*/
#include<stdio.h>
void OddN(int);
int main()
{
    int num;
    printf("Enter a N : ");
    scanf("%d",&num);
    printf("ODD num in rev order -> ");
    OddN(num);
    return 0;
}
void OddN(int n)
{
    if(n>0)
        {
            printf("%d ",(n*2)-1);
            OddN(n-1);
        }
}