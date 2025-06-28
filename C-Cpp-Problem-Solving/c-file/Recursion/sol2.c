// Write a recursive function to print first n natural numbers in resverse order
// function :       PrintRev(n)  : 5 4 3 2 1 
// Recursive Case : PrintRev(n-1)(n-n) 5 4 3 2 1 n-(n-1).(n-n) 
// Base Case :      n->n>n
//Ex:10 
//10 9 8 7 6 5 4 3 2 1 

#include<stdio.h>
void PrintRev(int);
int main(){
    int x;
    printf("Enter N natural number = ");
    scanf("%d",&x);
    PrintRev(x);
    return 0;
}

void PrintRev(int n){

    if(n>0){
    printf("%d ",n);
    PrintRev(n-1);
    }
}