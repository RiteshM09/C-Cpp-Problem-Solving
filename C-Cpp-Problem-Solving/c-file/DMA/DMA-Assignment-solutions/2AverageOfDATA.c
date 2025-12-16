/*
Write a program to ask the user to input a number of data values he
would like to enter then create an array dynamically to accommodate the data values. 
Now take the input from the user and display the average of data values.

input: 
Enter Number of data Values:5
Enter data values:6 5 4 3 2
output: Average = 4

...

input:
Enter number of data values: 5
Enter data values:
10
20
30
40
50
Output : Average = 30.00

*/
#include<stdio.h>
#include<stdlib.h>
float DataAverage();
int main()
{
    float avg = DataAverage();

    
    printf("Average : %.2f",avg);
 
}
float DataAverage()
{
    int numbers;
    printf("Enter Number of Data Values :");
    scanf("%d",&numbers);
    
    float *Values = (float *) malloc(sizeof(float) * numbers );// 4,4,4,4,4
    
    if(Values == NULL)
    {
        printf("MEMORY ALLOCATION FAIL \n");
        return 0.0;
    }
    float total= 0;
    for(int i=0;i<numbers;i++){
        printf("Enter data #%d :",i+1);
        scanf("%f",&Values[i]);
        total=total+Values[i];
    }

    free(Values);
    Values = NULL;

    float Average = total/numbers;

    return Average;
}