//Write a function to print all prime numbers between two given numbers. (TSRN)
//ex:   
// 1 10
// 2 3 5 7 

// 4 2
// 5 7 11 13 17 19

#include<stdio.h>
void PrintPrime(int,int);
int main(){
    int a,b;
    printf("Enter starting no. = ");
    scanf("%d",&a);
    printf("last no. =");
    scanf("%d",&b);
    PrintPrime(a,b);    //Actual Argument 

    return 0;
}

void PrintPrime(int x ,int y) //formal Argument 
{
    int i,temp=0;

    while(i){
    for(i=x;i<=y;i++){  
        if(y%i==0)
          temp++;
    
        if(temp>0 && i>1){
             printf("%d ,",i); 
        }
    }

}

// want to reset temp. so that 
