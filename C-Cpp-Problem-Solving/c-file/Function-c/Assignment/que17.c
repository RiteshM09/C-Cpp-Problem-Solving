//Write a function to Reverse a number
void ReverseN(int);
#include<stdio.h>
int main()
{
    int N,Result;
    printf("Enter a Number = ");
    scanf("%d",&N);
    ReverseN(N);
    return 0;
}
void ReverseN(int n){
    int temp,count=0;
    temp=n;
    while(temp){
        temp=temp/10;
        count++;
    }
    
    printf("Reverse of N = ");
    for(int i=1,temp=n;i<=count;i++){
        temp=n%10; 
        printf("%d",temp);
        n=n/10; 
    }

}


