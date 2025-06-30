// 15. Write a function to print all Armstrong numbers in the given range.
// 153 = 1+125+27 = 1^3+2^3+5^3 = 1*1*1+2*2*2+5*5*5
// Armstrong = 1 = 1^1, 21 = 2^2+1^2 
// step: count no of digit digit
// extract each digit 
// multiply digit with to its power 
// sum the calculated power in a variable
void PrintArmstrong(int,int);
#include<stdio.h>
int main(){
    int l,u; // lower limit & upper limit of the range 
    printf("Enter Lower limit =");
    scanf("%d",&l);

    printf("\nEnter Upper limit =");
    scanf("%d",&u);

    PrintArmstrong(l,u);
    return 0;
}
void PrintArmstrong(int l,int u){
    int count,temp,i, digit,sum,power,Range; //
    
    for(Range=l;Range<=u;Range++){ // R-1, l=1 ,u=10
    temp=Range;
    count=0;

    while(temp){
        temp=temp/10;
        count++;
    }
    // count = no. of digit  (i.e) 3
     
      for(temp=Range,sum=0;temp;temp=temp/10){
         digit=temp%10;
        
         for(i=1,power=1;i<=count;i++)
            power=power*digit;

            sum=sum+power;
     }
     if(sum==Range)
        printf("%d ",Range);
    }
    
}
