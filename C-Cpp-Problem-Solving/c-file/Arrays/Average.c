//Average of  10 number using array
#include<stdio.h>
int main()
{
    int a[10],i,sum=0,Avg;

    printf("Enter 10 numbers : ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    Avg=sum/10.0;
    printf("Sum of 10 Numbers: %d",Avg);

    return 0;
}