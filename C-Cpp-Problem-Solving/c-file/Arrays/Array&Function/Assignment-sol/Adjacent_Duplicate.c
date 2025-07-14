// Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
// input - 12 22 32 22 45 45 11 44 11 11
// output- fist adjacent duplicate is 45, return 45
#include<stdio.h>
int Adjacent_duplicate(int A[],int);
int main()
{
    int s,a[20],i,Result;
    printf("Enter Array Size :");
    scanf("%d",&s);

    printf("Enter Array Element :");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    Result=Adjacent_duplicate(a,s);
    if(Result == 0)
        printf("NO duplicate found");
    else
        printf("First found Adjacent Duplicate value is: %d ",Result);

}
int Adjacent_duplicate(int A[],int S){
    for(int i=1;i<S;i++)  
    {                      
            if(A[i]==A[i+1]) {
                return A[i];
                break;
            }
    }
    return 0;
}
