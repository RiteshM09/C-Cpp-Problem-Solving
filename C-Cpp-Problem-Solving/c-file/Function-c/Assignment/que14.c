//Write a function to check whether a given number is an Armstrong number or not.
// function            
// Armstrong Number 
// ex: 1 to 9
// ex: 153 
// 1^3+5^3+3^3 - 1+125+27 = 153
// 9474
// 9^4 + 9^4 + 4^4 + 7^4  = 6561 + 256 + 2401 + 256 = 947

// step:1 counting no. of digit
// step:2 extract each digit (i.e Last digit)
// step:3 calculate Extracted_digit^Power
// step:4 add the power value to sum variable
// step:5 compare sum with original number
#include<stdio.h>
void ArmstrongN(int);
int main(){
    int N;
    printf("Enter Number to check = ");
    scanf("%d",&N);
    ArmstrongN(N);
    return 0;

}
void ArmstrongN(int n){
    int count=0,Ldigit,sum=0,power,i;

    i=n;
    // counting digit 
    while(i!=0){ 
        count++; // count=3,n=153,temp=0
        i=i/10;  
    } 

    // extract digit and 
    i=n; // reset i 

    while(i!=0){  // count=3, n=153 , i=1 , Ldigit=1

        Ldigit=i%10;       
        
        // calculate power^Ldigit
        power=1;

        for(int j=1;j<=count;j++) // n=153 , i=1 , Ldigit=1, power=1 , count=3, j=3 
        {
            power=power*Ldigit;
        } 
        sum=sum+power; // Ldigit=3 ,count=3 ,sum=27+125(+1)) Add Ldigit^count to sum variable 
        i=i/10; // so that when i=0 loop end 
    }

    // compare sum with original_Number
    if(sum==n) 
        printf("%d is Armstrong ",n);
    else    
        printf("NOT");

}