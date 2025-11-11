//Write a program to sort elements of an array of size 10. Take array values from the user.
// i/p - 30 10 60 40 90 70 15 20 80 50
// o/p - 10 15 20 30 40 50 60 70 80 90 

// 30 10 60 40 90 70 15 20 80 50 9 (9-0)9-r
// 10 30 40 60 70 15 20 80 50 90 8 (9-1)
// 10 30 40 60 15 20 70 50 80 90 7 (9-2)
#include<stdio.h>
int main()
{
    int a[10],i,temp=0,r;
    printf("Enter 10 n: ");
    for(i=0;i<10;i++) 
        scanf("%d",&a[i]);

    for(r=0;r<10;r++){
        for(i=0;i<9-r;i++) // total comparison is 9(i.e 0-8)-r in each times the greater elements moves to right most position
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    
    printf("sorted Array : ");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);

    return 0;
}
