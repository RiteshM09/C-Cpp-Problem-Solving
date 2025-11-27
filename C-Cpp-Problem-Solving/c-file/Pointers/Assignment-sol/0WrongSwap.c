// Write a function to swap values of two int variables (TSRN).
// for correct ans refer file --->  1Fun_to_Swap2val.c 
#include<stdio.h>
void swap(int p,int q);
int main()
{
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);

    swap(a,b); // No swap in a and b
    printf("\nafter swapping : a=%d, b=%d",a,b);
}
void swap(int p,int q){// p and q will get swapped not a,b
    int temp;
    temp=p;
    p=q;
    q=temp;
    printf("p=%d, q=%d ",p,q);
}
// but we want to swap a and b not the copy(values) of a & b i.e p & q
// we want fuction swap(to make change in varible a and b) 
// not the values(p & q) of a and b has, there is a difference 
//i.e: a=5, b=10 
//then p=5 and q=10 its the copys of a,b values not the actual a b 
//instead we will pass address of a and address of b 
//refer file --->  1Fun_to_Swap2val.c 
