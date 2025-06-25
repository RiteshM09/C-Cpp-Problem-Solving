// Write a function to calculate number of permutations
//  which can be made from n items, selected r at a time. (TSRS)
// formula n! /(n-r)!

// condition (n>r)
// ex:
// n=3 , r=2
// A,B,C
// AB BC AC CA CB BA 

// n!/(n-r)!
#include<stdio.h>
int Permutation(int,int);
int main()
{
    int n,r,Result;
    printf("Enter number of item  and it's arragement n = ");
    scanf("%d", &n);

    printf("r = ");
    scanf("%d", &r);

    if(n>r){
        Result=Permutation(n,r); // actual argument 
        printf(" Number of Permutation are = %d",Result);
    }
    else{
        printf("Invalid Inputs i.e n>r ");
    }

    return 0;
}
int Permutation(int x,int y){

    int f=1,i,temp=1,z;

    for(i=1;i<=x-y;i++)
    {
        temp=temp*i;
    }

    for(i=1;i<=x;i++){ 
        
        f=f*i;
    }

    z=f/temp; 
    return z;
}