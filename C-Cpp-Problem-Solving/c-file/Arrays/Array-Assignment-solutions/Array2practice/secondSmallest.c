// Write a program to find second largest in an array. Take array values from the user.
//input  - 10 20 40 20 90 10 35 80 75 60
//output - 80
//edge case - if all values are same
#include<stdio.h>
int main()
{
    int i, a[10], min, second_min;

    printf("Inpute array:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    min=a[0];
    second_min=a[1];

    if(a[1]<a[0])
    {
        min=a[1];
        second_min=a[0];
    }
    else{
        min=a[0];
        second_min=a[1];
    }

    for(i=2;i<10;i++)
    {
        if(a[i]<min)
        {
            second_min=min; 
            min=a[i];
        }
        else if(a[i]<second_min)
            second_min=a[i];   
    }

    printf("second smallest number = %d %d",min,second_min);
    return 0;
}
