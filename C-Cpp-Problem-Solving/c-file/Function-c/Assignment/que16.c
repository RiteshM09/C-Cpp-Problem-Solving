// Write a function to remove all occurrence of a given digit from a give number.
// ex: 14335
// remove Digit- 3
// new no. - 145

// (ex: 123535)
//digit to remove (e.g. 5)
// remove all occurrences of 5 from number 

//step1 : count the No.digit
//step2 : extract each digit (i.e last) then check if extracted digit==Digit to be remove 
//step3 : if true the  skip the digit and move to next iteration
//step4 : store the digit in a no. 
//step5 : Note- the we got is in reverse so Reverse it again using a loop 

int RemoveDigit(int,int);
#include<stdio.h>
int main()
{
    int N,Result,Remove;
    printf("Enter a Number = ");
    scanf("%d",&N);

    printf("Digit to be Remove =");
    scanf("%d",&Remove);

    Result=RemoveDigit(N,Remove);

    printf("Reverse of N = %d ",Result);
    return 0;
}
int RemoveDigit(int n ,int rem){
    int temp=1,count=0,i,NewN;

    // counter no. of digits 
    temp=n;
    while(temp){
        temp=temp/10;
        count++;
    }

    // loop till the no of digit n=82324

    for(i=1,temp=n,NewN=0;i<=count;i++){ 
                                                      
        temp=n%10;  

        if(temp==rem){ 
            n=n/10; // move to next digit
            continue; // skip the digit, move to next iteration
        }
        else    
            NewN=10*NewN+(temp); 

        n=n/10;   
        
    }
    // reverse the number 
    // original_N= 82324, NewN=438,temp=0
    temp=0;
    while(NewN)
    {   
        temp=10*temp+NewN%10;
        NewN=NewN/10;
    }
    return temp;

}

// (ex: 123535)
//digit to remove (e.g. 5)
// remove all occurrences of 5 from number 
