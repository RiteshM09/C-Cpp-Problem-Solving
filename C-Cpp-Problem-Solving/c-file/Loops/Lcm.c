//find the LCM (Least Common Multiple) of two numbers 
/*
input : 4 6 
output: 12 

input : 5 10
output: 10

input : 7 3 
output: 21

input : 8 12
output: 24
*/
#include<stdio.h>
#include <stdlib.h> 
int main()
{
    int a,b,i=1;
    
    printf("Enter 2 Number : ");
    scanf("%d%d",&a,&b);
    a = abs(a);// edge case(convert negative no. to positive)
    b = abs(b);
    if (a == 0 || b == 0) // edge case
    {
        printf("not valid");
        return 0;
    }

    if(a>b)
        i=a;
    else
        i=b;
     
    while(i){
        if(i%a==0 && i%b==0)
            {
                printf("%d",i);
                break;
            }
            i++;
        }  
    
    return 0;
}

