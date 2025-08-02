// without pointer display 2d array with same size.
#include<stdio.h>
void f1(int y[][4],int row);
int main()
{
   
    int x[3][4]={{1,2,3,4},{5,10,15,20},{9,8,1,2}};
    
    f1(x,4);
    return 0;
}
void f1(int y[][4],int row){
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<4;j++)
            printf("%d ",y[i][j]);
        printf("\n");
    }
}