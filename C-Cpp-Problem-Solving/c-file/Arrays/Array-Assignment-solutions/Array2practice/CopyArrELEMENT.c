// Write a program in C to copy the elements of one array into another array. 
// Take array values from the user.
// array A = 2 3 4 5 
// array B = 2 3 4 5
// ar[a]=a[b]
#include<stdio.h>
int main()
{
    int i,a[10],r,t,size,b[10];
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("Enter n values : ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<size;i++)
        b[i]=a[i];

    printf("copied array: ");
    for(i=0;i<size;i++)
        printf("%d ",b[i]);

    return 0;
}
