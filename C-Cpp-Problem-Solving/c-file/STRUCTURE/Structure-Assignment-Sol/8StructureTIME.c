// Write a program to calculate the difference between two time periods!
/*
Input:
Enter start time (hh mm ss): 2 45 30
Enter end time   (hh mm ss): 4 20 10

Output: Difference = 1 hour 34 minutes 40 seconds

... 

Input:
Enter start time (hh mm ss): 10 55 50
Enter end time   (hh mm ss): 11 10 20

Output: Difference = 0 hour 14 minutes 30 seconds

...

Input:
Enter start time (hh mm ss): 7 50 55
Enter end time   (hh mm ss): 9 15 20

Output: Difference = 1 hour 24 minutes 25 seconds

...

Input:
Enter start time (HH MM SS): 08 05 50
Enter end time (HH MM SS): 07 59 20

Output : Time Difference = 0:6:30

*/
#include<stdio.h>
#include<stdlib.h>
struct TIME{
    int hours;
    int minutes;
    int sec;
};
void TIME_difference(struct TIME ,struct TIME );
int main()
{
    struct TIME t1;
    struct TIME t2;

    printf("Enter Start time: (hh:mm:ss) = ");
    scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.sec);
     
    printf("\n Enter End time: (hh:mm:ss) = ");
    scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.sec);

    TIME_difference(t1,t2);
    
}
void TIME_difference(struct TIME first,struct TIME second){
    struct TIME diff;
    // abs() prevents your result from becoming negative.
    
    /*  2 45 30
        4 20 10 - ans =  1 hour 34 minutes 40 seconds
        
        ( 2*3600 + 45*60 + 30 ) - ( 4*3600 + 20*60 10 ) =  ( 5680 )

        5680/3600 = 1hr(1hr and something )
        then, cal leftover minutes

         diff(2080) = 5680%3600
        ( 5680%3600 ) = 2080sec (something)

        2080/60 = 34min and something 
        ( 2080%60 ) = 40sec (something )
        2080%60 = 40sec 

        (2080)/60 = 34min

    */
   int seconds =abs( (first.hours*3600 + first.minutes*60 + first.sec ) - ( second.hours*3600 + second.minutes*60 + second.sec ));
   //abs() will convert -ve to +ve,  difference will be +ve

    diff.hours = seconds/3600;
    seconds = seconds%3600;
    diff.minutes = seconds/60;
    seconds = seconds%60;
    diff.sec = seconds;

    printf("\n Time difference (hh:mm:ss): %d : %d : %d ",diff.hours,diff.minutes,diff.sec);
}