// Write a program to find second largest in an array. Take array values from the user.
//input  - 10 20 40 20 90 10 35 80 75 60
//output - 80
//edge case - if all values are same
// total time - 2hr
#include<stdio.h>
int main()
{
    int i,a[10],max,second_max;
    printf("Enter 10 Values : ");
    
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);// 10 20 40 20 90 10 35 80 75 60
    if(a[0]>a[1]){
        max=a[0];
        second_max=a[1];
    }
    else {
        max=a[1];
        second_max=a[0];
    }
    // second_max=a[0], max=a[1]  10 20
    for(i=2;i<=9;i++)// 10 20 40 20 90 10 35 80 75 60 // max=10 ,min=0 
    {
        if(a[i]>max) // 75 > 90  a[i]=90 max=90 , second_max=80
        {
            second_max=max; // imp first give max value to second max then 
            max=a[i];       // a[i] to max
        }
        else // again compare a[i] with secon_largest value
        {
            if(a[i]>second_max)
                second_max=a[i];
        }
    }  
    if(max == second_max)//edge case
        printf("No second largest number (all elements may be equal).\n");
    else
        printf("Second Largest Number = %d", second_max);

}


// 10 20 40 20 90 10 35 80 75 60
// max=a[i] max=90
// 10 20 40 20 90 10 35 80 75 60

// 10 20 20 40 10 35 80 75 60 90
// 10 20 20 10 35 40 75 60 80 90

// max=90
// a[1] a[2] a[3]
//  70   80   90
// a[1]=70

//  a[3]>max 
//     //max=90 
//     //a[i-1];

// max<a[i]