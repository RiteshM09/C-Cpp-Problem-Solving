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
Permutation(int,int);
int main()
{
    int n,r,Result;
    printf("Enter number of item  and it's arragement ");
    scanf("%d %d",&n,&r);

    if(n>r){
        Result=Permutation(n,r); // actual argument 
        printf(" Number of Permutation are = ");
    }
    else{
        printf("Invalid Inputs i.e n>r ");
    }

    return 0;
}
Permutation(int x,int y){

    int f=1,i,temp,z; 
    temp=f;f=1,t=1

    for(i=1;i<=x;i++){x=3
        // temp=temp*(x-y);t=1*1,1*
        f=f*i; f=1,
    }
    z=f/temp; 

    return z;
}
2 1 2