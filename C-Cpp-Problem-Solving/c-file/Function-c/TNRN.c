// TNRN function

// ex add of 2 number 
#include<stdio.h>
void add(); //function decleration

int main(){
    add(); // fuction call
    return 0;
}

void add() //empty paranthesis mean TN // function definition
{
    int a,b;
    printf("Enter 2 number = ");
    scanf("%d %d",&a,&b);
    printf("addition of 2 number = %d",(a+b));
    // NO return keyword means RN
}