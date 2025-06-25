//TS RS (takes someting - return's something)
//Function 
// ex add of 2 number 
#include<stdio.h>

int add(int,int);

int main()
{   
    int x,y,n;
    printf("Enter 2 number = ");
    scanf("%d%d",&x,&y); // actual argument 

    n=add(x,y); // 
    printf("Sum is = %d ",n);
    return 0;

}

int add(int a, int b) // 
{
    int c;
    c=a+b;
    return c;
}