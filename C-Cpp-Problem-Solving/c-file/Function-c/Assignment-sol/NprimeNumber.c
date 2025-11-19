// Write a function to print First N Prime Numbers. (TSRS). 
// i/p: n=5
// o/p: 2 3 5 7 11 
// A prime number is a number greater than 1 that has only two factors: 1 and itself.
// ex : // 2 3 5 7 11 13 17 19 23 29 31 37
// 1 :2    i=2
// 2 :2 3   i=3 
// 3 :2 3 5   i=5 
// 4 :2 3 5 7   i=7
// 5 :2 3 5 7 11 i=11
// 6 :2 3 5 7 11 13  i=13
#include<stdio.h>
int IS_PRIME(int);
void N_Prime(int);
int main()
{
    int n;
    printf("Enter n,no. of prime  = ");
    scanf("%d",&n);

    N_Prime(n);
    return 0;
}
void N_Prime(int num){
    int x=2; 
        while(num) //5 4 3 2 1 
        {
             if(IS_PRIME(x))
             {
                printf("%d ",IS_PRIME(x));
                num--;
             }
         x++; 
        }
    }
int IS_PRIME(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            break;

    if(n==i)
        return n;
    else
        return 0;
}

// 1 2 3 4 5 6 7 8 9 10 11 12

// 2 4 6 8 10

// 1 3 5 7 9 11
