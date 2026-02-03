/*
Define a function to produce all the combinations of strings 
that can be made out of characters of a given string, selecting r at a time. 
Return a dynamically created array of strings holding all combinations.

note: array of strings(2d array)

NOTE:   combination : n!/(n-r)! x r!
        r = number of character to be selected at each pass.
        TRUE only when, r <= n (no. of selected char ) < (size of string)

input:  
Enter String : abc
select r : 2

output:
ab
bc
ca

nCr = 3!/(3-2)! 2! = 3*2/2 = 3

...

input: 
Enter String : abc
select r : 2

output:
ab
bc
ca


*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void combinations(char str[],int r);
int main()
{
    char str[]={"ABCDE"};
    // char **p;
    // int r;
    // printf("ENTER String : ");
    // fgets(str,50,stdin);
    // p = str[strcspn(str,"\n")]='\0';

    // printf("ENTER character to select r : ");
    // scanf("%d",&r);

    combinations(str,3);

}
void combinations(char str[],int r)
{
    // ABCDE
    int len = strlen(str);
    int i,j,k;//for  char 1,2,3
    char temp[r+1];// r+1 (1 for null char)

    for(i=0;i<=len-r;i++)// (5-3)2, 0 1 2(A,B,C)
    {
        // temp[0 1 2]
        temp[0] = str[i];// A 
        for(j=i+1;j<=len-r+1;j++) // 5-3+1(3), 1 2 3 (B,C,D)
        {
            temp[1]=str[j];// A | B
            for(k=j+1;k<=len-r+2;k++) // 5-3+2(4), 2 3 4 (C,D,E)
            {
                temp[2]=str[k];
                temp[3]='\0';
                printf(" %s \n",temp);
            }
        }
    }
}
// void fact(int *num)
// {
//     int fact=1;
//     while(*num!=0)
//     {
//         fact=fact*(*num);
//         (*num)--;
//     }
//     return fact;
// }