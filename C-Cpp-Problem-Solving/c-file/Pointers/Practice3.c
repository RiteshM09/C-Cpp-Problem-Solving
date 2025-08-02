// Arrays of Pointer.
// input and display data in all 4 arrays using function.
// 2d array with different size's
#include<stdio.h>
void input(int **,int,int size[]);
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
    for(i=0;i<4;i++)
    display(p[i],size[i]);
    return 0;
}
void display(int *p,int size){
    int i;
    printf("\ndisplay %d arrays:",size);
    for(i=0;i<size;i++)
        printf("%d ",*(p+i));
    printf("\n");
}

void input(int **q,int n,int size[]){
    // *(q+i) = p[i]
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("Enter %d numbers = ",size[i]);
        for(j=0;j<size[i];j++)// p[i] = i=0 - a, i=1 - b, i=2 - c, i=3 - d ; j = a[0] - size[a] -  
            scanf("%d",*(q+i)+j);

    }

}   

//  *q    = p[0]
// *(q+1) = p[1]
// *(q+2) = p[2]
// *(q+i) = p[i]


// q - p[0,1,2,3]
// p[0] == a

// p[i] = i=0 - a, i=1 - b, i=2 - c, i=3 - d ; j = a[0]

// in a[0,1,2,3] 
/*
for - &a[0] = &a 
address a in terms of p 
 p[0] = &a[0]
 p[1] = &b[0] 
 p[2] = &c[0]
 p[3] = &b[0]

in a[i] address's of a[1],a[2],a[3],a[4]
 p[0]+1 = &a[1]  ,,&a[i]=p[0]
 p[0]+2 = &a[2]
 p[0]+3 = &a[3]
 p[0]+4 = &a[4]

  p[0]+j = &a[j] 
*(q+i)+j 
*/ 


// p[0]- &a[0] p[1]-&a[1] p[2]-&a[2] p[3]-&a[3]
// 