// Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
// input - 12 22 32 22 45 45 11 44 11 11
// output- fist adjacent duplicate is 45, return 45
int AdjacentDuplicate(int b[],int );
#include<stdio.h>
int main()
{
    int a[20],i,size,ans;
    printf("size of array : ");
    scanf("%d",&size);

    printf("Array Elements: ");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
    
    ans = AdjacentDuplicate(a,size);
    if(ans)
        printf("Adjacent duplicate is : %d",ans);
    else
        printf("NO adjacent duplicate");
}
int AdjacentDuplicate(int b[],int S)
{
    int i;
    for(i=0;i<S;i++)
    {
        if(b[i]==b[i+1])
            return b[i];
    }
    return 0;
}