// x=5, xaddress=1000, j=1000, jaddress=2000
#include <stdio.h>
void swap(int*, int*);
int input(int a[],int);
int main()
{
    int a,b;
    printf("Enter 2 number : ");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);

    return 0;
}
void swap(int *p,int *q){ 
    int temp;
    temp=*p;
    *p=*q;
    *q=temp; 
}

// int input(int a[],int){
// }
