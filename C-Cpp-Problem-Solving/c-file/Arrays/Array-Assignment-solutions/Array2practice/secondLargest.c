// Write a program to find second largest in an array. Take array values from the user.
//input  - 10 20 40 20 90 10 35 80 75 60
//output - 80
//edge case - if all values are same
#include<stdio.h>
int main()
{
    int i, a[10], max, second_max;

    printf("Inpute array:");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    max=a[0];
    second_max=a[1];

    if(a[1]>a[0])
    {
        max=a[1];
        second_max=a[0];
    }
    else{
        max=a[0];
        second_max=a[1];
    }

    for(i=2;i<=9;i++)
    {
        if(a[i]>max)
        {
            second_max=max;
            max=a[i];
        }
        else 
        {
            if(a[i]>second_max)
              second_max=a[i];
        }

    }
    printf("second largest number = %d %d",max,second_max);
    return 0;
}
