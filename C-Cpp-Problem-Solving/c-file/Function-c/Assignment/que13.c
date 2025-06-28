//Write a function to print all prime numbers between two given numbers. (TSRN)
//ex:   
// total time taken :4hr.

#include<stdio.h>
void PrintPrime(int,int);
int main(){
    int a,b;
    printf("Enter starting no. = ");
    scanf("%d",&a);
    printf("last no. = ");
    scanf("%d",&b);
    PrintPrime(a,b);    //Actual Argument 

    return 0;
}

void PrintPrime(int x ,int y) //formal Argument 
{
    //1 12 - 2 3 5 7 11 , 1,2,3,4,5,6,7,8,9,10
    int i,j;
    for(i=x;i<=y;i++){ 
        
     for(j=2;j<i;j++){ 
        if(i%j==0){ 
            break;
        }
     }
     if(i==j && i>1)
        printf("%d",i); 
    }
    
   
}

// want to reset temp. so that 
