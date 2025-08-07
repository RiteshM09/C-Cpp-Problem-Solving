// Calculate HCF of two number
// using Euclid’s Algorithm

/*
33 12 
3

4 6 
2

20 10
5

50 30
10
*/
#include<stdio.h>
int main(){
    int n1,n2,temp;
    printf("Enter 1st number =");
    scanf("%d",&n1);

    printf("Enter 2nd Number =");
    scanf("%d",&n2);

    while(n2!=0)
    {
        temp=n2;
        n2=n1%n2;//n1=3, n2=0 ,temp=3
        n1=temp;
    }

    printf("HCF = %d",n1);
    return 0;
}

/*
Euclid’s Algorithm:

(quotient)   Q
(remainder) R

Q   n1  n2  R(remainder)
2   33  12  9
1   12  9   3
3   9   3   0
-   3   0
*/
