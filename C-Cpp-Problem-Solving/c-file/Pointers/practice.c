// x=5, xaddress=1000, j=1000, jaddress=2000
#include <stdio.h>
void swap(int, int);
int main()
{
    int x,y;

    printf("Enter 2 number : ");
    scanf("%d %d",&x,&y);
    
    swap(x,y);
    
    printf("%d %d",x,y);
 
    return 0;
}
void swap(int a,int b){ 
    int temp;
    temp=a;
    a=b;
    b=temp; 
}
