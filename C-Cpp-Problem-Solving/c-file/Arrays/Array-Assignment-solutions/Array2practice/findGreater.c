// Write a program to find the greatest number stored in an array of size 10. 
//Take array values from the user.

// 12 2 32 1 2 2 1 23 4 4 23 3
// 32
#include<stdio.h>
int main()
{
    int a[10],i,g;

    printf("Enter Any 10 Numbers :");
    for(i=0;i<10;ia++)
        scanf("%d",&a[i]);
    g=a[0];
    for(i=0,;i<10;i++)
    {
        if(a[i]>g)
            g=a[i];
    }

    printf("\nGreater :%d",g);
     

    return 0;
}