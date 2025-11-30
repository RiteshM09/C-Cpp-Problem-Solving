// Arrays of Pointer.
// input and display data in all 4 arrays using function.
// 2d array with different size's
#include<stdio.h>
void input(int **,int,int []);
void display(int *,int size);
int main()
{
    int  a[5],b[6],c[3],d[8];
    int *p[4],i, size[]={5,6,3,8};

    p[0]=a;
    p[1]=b;
    p[2]=c;
    p[3]=d;
    input(p,4,size);

    return 0;
}
void display(int **p,int size){

    int i.j;
    for(i=0;i<n;i++){
        **(q+i)
    }
}
// 
//
void input(int **q,int n,int size[]){
    int i,j;
    for(i=0;i<n;i++){// p[0] p[1] p[2] p[3]
         for(j=0;j<size[i];j++)
            scanf("%d",*(q+i)+j);
                //*(q+i) - &p[0] = a
                // in p[0] for a -> j is  0 to 4(size-1)
    }
}   

