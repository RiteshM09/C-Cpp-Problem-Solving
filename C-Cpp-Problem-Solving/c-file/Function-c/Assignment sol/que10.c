// Write a function to calculate number of combinations 
// which can be made from n items, selected r at a time. (TSRS)
// formula n!/r!*(n-r)!
// ex: n=3 r=2
// A,B,C
// AB BC CA
// 
#include<stdio.h>
int Combination(int,int);
int main(){
    int n,r,Result;
    printf("Enter number of item  and it's arragement n = ");
    scanf("%d", &n);

    printf("r = ");
    scanf("%d", &r);

    if(n>=r){
        Result=Combination(n,r);
        printf("No of combinations are = %d",Result);
    }
    else{
        printf("Invlaid input!! please enter n ≥ r ≥ 0"); 
    }
    return 0;
}

int Combination(int x, int y){
// C(n,r) = n * n-1 * n-2.../ r * r-1 * r-2... 

// ex P(5,2) = 5*4*3*2/3*2 
// ex P(4,2) = 4*3*2/2    

// ex  C(5,2) =  5 * 4 * 3*2/ 2 * 1
// ex2 C(6,3) = 6*5*4*3*2*1 / 3*2*1

    int i,f=1,t=1,z;
    for(i=0;i<y;i++){   // 5,2 
        f=f*(x-i);   
    }
    for(i=1;i<=y;i++){
        t=t*i;
    }
    z=f/t;

    return z;
}

