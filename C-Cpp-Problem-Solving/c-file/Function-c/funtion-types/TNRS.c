// Function 
//TN RS (takes someting - return's something)
// ex add of 2 number 

// NOTE : RETURN - It Return value, It return control,
// we cannot return more than 1 value using return keywork

#include<stdio.h>
int add();
int main(){
    int z;
    z=add(); // i.e z = value of c 
    printf("sum is %d",z);
    return 0;
}

int add()
{
    int a,b,c; 
    printf("Enter a,b ="); 
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}
