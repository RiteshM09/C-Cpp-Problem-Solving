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
int main()
{
    char str[50];
    char **p;
    int r;
    printf("ENTER String : ");
    fgets(str,50,stdin);
    p = str[strcspn(str,"\n")]='\0';

    printf("ENTER character to select r : ");
    scanf("%d",&r);

    combinations(str,r);

}
char** combinations(char str[],int ch_count)
{
    
}
void fact(int *num)
{
    int fact=1;
    while(*num!=0)
    {
        fact=fact*(*num);
        (*num)--;
    }
    return fact;
}