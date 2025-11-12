// Write a function to count a total number of duplicate elements in an array. 
//(Means elements that occurs 2 times in an array)
//  5 2 3 1 1 2 1 1 4 3 5
// total duplicate: 4
// Without sorting.
#include<stdio.h>
int Count_Duplicate(int A[],int);
int main()
{
    int s,a[20],P,D,i;
    printf("Enter Array size: ");
    scanf("%d",&s);

    printf("Enter Array elements: ");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);

    
    printf("Duplicate items occuring more than 2 time : %d ",Count_Duplicate(a,s));
    return 0;
}
int Count_Duplicate(int b[],int S)
{
    int i,j,count=0,same;
    for(i=0;i<S;i++)
    {
        if(b[i]==-1)
            continue;// if visited then skip, no re-checking after

        for(j=i+1;j<S;j++){
            if(b[i]==b[j])
            {
                count++;
                b[j]=-1; //mark visited
                break;// if duplicate found then stop checking (for j)
            }         
        }
    }
    return count;
}
