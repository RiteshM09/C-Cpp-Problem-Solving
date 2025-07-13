// input:
// Enter size - 5
// 15 20 10 50 30
// o/p: 10
// Write a function to find the smallest number from the given array of any size. TSRS
#include<stdio.h>
int SmallerstN(int b[], int);
int main()
{
    int n,a[20]; 
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter Array Element: ");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Smallest Number amoung all is: %d",SmallerstN(a,n)); // (ar, ar size)
    return 0;
}
int SmallerstN(int b[], int N){
    int i,min=b[0];
    for(i=0;i<N;i++)
    {
        if(b[i]<min)
            min=b[i];
    }
    return min;
}

