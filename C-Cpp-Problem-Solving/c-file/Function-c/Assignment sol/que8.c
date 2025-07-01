// 8. Write a function to calculate factorial of a number (TSRS)
#include<stdio.h>
long int fact(int);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);

    printf("%d! = %ld",n,fact(n));
    return 0;
}

long int fact(int x){ 
    long int f=1,i;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}

// 1
// 1

// 2
// 2

// 3
// 6

// 5
// 120