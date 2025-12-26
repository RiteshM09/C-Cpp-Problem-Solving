// Recursive fucntion to print n natural number.
/*
input: 10
output:1 2 3 4 5 6 7 8 9 10

input: 5
output 1 2 3 4 5 

1. function 
2. recursive case
3. base case (end)
*/
#include<stdio.h>
void PrintNum(int);
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    PrintNum(num);

    // printf("n natural n %d ",num);

    return 0;
}
void PrintNum(int n)
{
    if(n>0)
    {
        PrintNum(n-1);
        printf("%d ",n*2);
    }
}