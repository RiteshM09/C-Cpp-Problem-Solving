#include<stdio.h>
void input(int* ,int);
int main()
{
    int a[10];
    printf("Enter 10 valuse: ");
    input(a,10);
    printf("\n");
    return 0;
}
void input(int *p,int size){
    //arr[]=" , , , , " size=10
    for(int i=0;i<size;i++)
        scanf("%d",p+i);
        // P --> 1000 1004 1008 1012... ,Address of 1st block (1000) ~P
        // p+0 --> &a[0] ---> 
        // p+1 --> &a[1]
        // p+2 --> &a[2]
        // p+3 --> &a[3]
        // p+4 --> &a[4]
        // p+5 --> &a[5].....
}