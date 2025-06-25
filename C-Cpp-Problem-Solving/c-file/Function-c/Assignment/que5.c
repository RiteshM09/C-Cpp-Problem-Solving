// Write a function to calculate sum of first n natural numbers. (TSRS)
#include <stdio.h>
int sum(int);

int main()
{
   int n, A;
   printf("Enter n= ");
   scanf("%d", &n);
   A = sum(n); // Actual Argument A = value of s

   printf("\n\nSum of first %d natural number = %d", n, A);
   return 0;
}

int sum(int x) // formal Argument
{
   int s = 0, i;
   printf("First %d natual number are ", x);
   for (i = 1; i <= x; i++)
   {
      printf("%d ", i);
      s = s + i;
   }
   return s;
}