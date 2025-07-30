// x=5, xaddress=1000, j=1000, jaddress=2000
#include <stdio.h>
void swap(int*, int*);
void input(int*, int );
void display(int*,int);
int main()
{
     int a[10],i;
    // printf("Enter 2 number : ");
    // scanf("%d %d",&a,&b);
    // swap(&a,&b);
    // printf("a=%d,b=%d",a,b);
    input(a,10);
    display(a,10);
    return 0;
}
void input(int *p,int size){
    int i;
    printf("Enter size: %d :",size);
    for(i=0;i<size;i++)
        scanf("%d",p+i);// p+i = &a[i]
}
void display(int *p,int size){
    int i;

    for(i=0;i<size;i++)
        printf("%d ",*(p+i));
}

void swap(int *p,int *q){ 
    int temp;
    temp=*p;
    *p=*q;
    *q=temp; 
}


// int input(int a[],int){
// }
