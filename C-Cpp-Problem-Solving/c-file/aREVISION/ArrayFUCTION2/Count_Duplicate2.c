// Write a function to count a total number of duplicate elements in an array. 
//(Means elements that occurs 2 times in an array)
//  5 2 3 1 1 2 1 4 3 5
// total duplicate: 4
// With sorting.
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

    
    printf("\nDuplicate items occuring more than 2 time : %d ",Count_Duplicate(a,s));
    return 0;
}
int Count_Duplicate(int b[],int S)
{
    int i,j,count=0,temp,r;
    //sort
    for(r=0;r<S;r++){
        for(i=0;i<S-1-r;i++)
        {
            if(b[i]>b[i+1])
            {
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }

        }
    }
    printf("\n SORTED: ");
    for(i=0;i<S;i++)
        printf("%d ",b[i]);
    //5 2 3 1 1 2 1 4 3 5

    //5 5 4 3 3 2 2 1 1 1
    j=1;
    for(i=0;i<S-1;)
    {
        if(b[i]==b[i+1])
            count++;

        while(b[i]==b[j])
            j++;

        i=j;          
    }

    return count;
}
