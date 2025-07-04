// Calculate HCF of two number
#include<stdio.h>
int main(){
    int n1,n2,i;
    printf("Enter 1st number =");
    scanf("%d",&n1);

    printf("Enter 2nd Number =");
    scanf("%d",&n2);


    if(n1>n2)
        i=n2;
    else 
        i=n1;

    while(i>=1)
    {
        if(n1%i==0 && n2%i==0){
            printf("HCF of %d and %d is = %d",n1,n2,i);
            break;
            }
        i--;
    }

    return 0;
}
