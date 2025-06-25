// 8. Write a function to calculate factorial of a number (TSRS)
#include<stdio.h>
int fact(int);
int main()
{
    int n,Result;
    printf("Enter a number = ");
    scanf("%d",&n);

    Result=fact(n);    //actual argument 
    printf("%d! = %d",n,Result);
    return 0;
}

int fact(int x){ 
    int f=1,i;
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