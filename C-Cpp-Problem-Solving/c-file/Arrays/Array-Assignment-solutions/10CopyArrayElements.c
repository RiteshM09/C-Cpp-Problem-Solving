// Write a program in C to copy the elements of one array into another array. 
// Take array values from the user.
// array A = 2 3 4 5 
// array B = 2 3 4 5
// ar[a]=a[b]
#include<stdio.h>
int main()
{
    int a[10],i,b[10],n;
    printf("Enter number of element: ");
    scanf("%d",&n);

    printf("Enter Array Elements of A:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<=n;i++)
        b[i]=a[i]; 

    printf("Print copied array element in B :");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);

    return 0;
}
