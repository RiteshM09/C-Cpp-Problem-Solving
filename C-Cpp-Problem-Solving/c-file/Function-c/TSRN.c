//Fuction 
//TS RN (takes someting - return's nothing)
// ex add of 2 number 
#include<stdio.h>
void add(int,int);

int main(){
    int x,y;
    printf("Enter 2 numbers =");
    scanf("%d%d",&x,&y);
    add(x,y);   //parameter(actual argument)
    return 0;
}

void add(int a,int b) //parameter(a,b formal arguments ) in paranthesis mean TS // function definition
{
    int c;
    c=a+b; 
    printf("sum is = %d",c);
    // NO return keyword means RN
}
