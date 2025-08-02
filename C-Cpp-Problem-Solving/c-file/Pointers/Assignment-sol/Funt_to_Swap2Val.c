#include<stdio.h>
void swap(int *p,int *q);
int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);

    swap(&a,&b);
    printf("\nafter swapping : a=%d, b=%d",a,b);
}
void swap(int *p,int *q){
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}