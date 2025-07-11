// Write a program to find the second smallest number in an array. Take array values from the user.
// i\p - 50 20 30 80 10 40 60 90 100 15
// o/p - 15
#include<stdio.h>
int main()
{
    int a[10],i,min, second_min;
    printf("Enter 10 Values :");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    if(a[0]<a[1]){
        min = a[0];
        second_min =a[1];
    }
    else{
        min = a[1];
        second_min =a[0];
    }
    //a[0] - 20 a[1] - 50  
    for(i=2;i<=9;i++)//  min=10 s_min=15
    {
        if(a[i]<min)
        {
            second_min=min;
            min=a[i];
        }
        else   // a[i]>min     
            if(a[i]<second_min) 
            {
                second_min=a[i];
            }
    }

    printf("Second Smallest Values are : %d",second_min);
    return 0;
}
