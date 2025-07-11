//Write a recursive function to find nt term of a Fibonacci series

// function             -  PRINTfib(n) -  0112358..n 
// R.C                  -  PRINTfib(n-1) - (0112358)(print(fib n))
//                         PRINTfib(n-1) - 

//                    calculate fibonacci next term i.e (fib n) in a function
                        
// R.C                  -          FibonacciN(n-1) -  (0 1 1 2)+1    (0 1 1 2 3)+2
                                   
//fibonacci series 
// for n= 0 1 2 3 4 5 6 7  8  9  10 11 12  13....
//term    0 1 1 2 3 5 8 13 21 34 55 89 144....
#include <stdio.h>
int Fib(int); 
void PrintFib(int);
 
int main() {
    int N;
    printf("Enter n term of fibonacci serie:");
    scanf("%d", &N);
    PrintFib(N);
}

int Fib(int n){
    if(n==0 || n==1)
        return n;
    return Fib(n-1)+Fib(n-2);
}

void PrintFib(int n){
    if(n==0)
        printf("%d ", n);
    else{
        PrintFib(n-1);
        printf("%d ",Fib(n));
    }

}
//  fib(7) -  0112358 13 
//  fib(6) - (0112358)(print(fib 7)) fib(6)+(n-2)+(n-1)

