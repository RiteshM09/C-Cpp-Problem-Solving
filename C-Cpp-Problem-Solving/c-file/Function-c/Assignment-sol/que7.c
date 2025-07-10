// 7. Write a function to check whether a given number is even or odd. (TSRS). 
//(Return 1 if even otherwise return 0)

#include<stdio.h>
int EvenOdd(int );
int main()
{
    int n,R;
    printf("Enter a number = ");
    scanf("%d",&n);
    R=EvenOdd(n);
    if(R==1)
        printf("\n%d Number is Even",n);
    else    
        printf("\n%d Number is Odd",n);
    
    return 0;
}

int EvenOdd(int x){

    if(x%2==0)
        return 1;
    else
        return 0;
}