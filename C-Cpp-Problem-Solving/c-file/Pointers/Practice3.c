// Arrays of Pointer.
// input data in all 4 arrays using function.
#include<stdio.h>
void input(int **,int,int size[]);
int main()
{
    int a[5],b[6],c[3],d[8];
    int *p, size[]={5,6,3,8};

    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;

    input(p,4,size);
    return 0;
}
void input(int **q,int n,int size[]){
    // *(q+i)
    int i,j;
    for(i=0;i<n;i++){// 0 1 2 3 
        for(j=0;j<size[i];j++) // p[i] = 0,j = 
        scanf("%d",*((q+i)+j));

    }

}   