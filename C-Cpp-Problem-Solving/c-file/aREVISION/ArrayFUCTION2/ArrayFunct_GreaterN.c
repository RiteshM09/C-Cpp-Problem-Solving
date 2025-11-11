// Write a function to find the greatest number from the given array of any size.
// (TSRS)
// input - 12 21 32 100
// output - 100
#include<stdio.h>
int Max_Number(int b[],int );
int main()
{
    int a[100],i,n,Result;
    printf("Enter Length of array :");
    scanf("%d",&n);

    printf("Enter Array Elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    Result=Max_Number(a,n);
    printf("Greater number : %d",Result);
    return 0;
}
int Max_Number(int b[],int N)
{
    int i,max;
    max=b[0];
    for(i=1;i<N;i++)
       if(b[i]>max) 
        max=b[i];

    return max;
}
