#include<stdio.h>
int main()
{
    int n,f=1;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n)
    {
        f=f*n;
        n--;
    }
    printf("Factiorial : %d",f);
    return 0;
}