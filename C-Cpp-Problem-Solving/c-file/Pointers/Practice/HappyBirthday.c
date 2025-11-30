#include<stdio.h>
void Happy_Birthday(int *);
int main()
{
    int age=20;
    int *p_Age=&age;
    printf("%p\n",&age);
    printf("%p\n",p_Age);

    printf("%d\n",*p_Age);

    Happy_Birthday(&age);
    printf("You are %d years old \n",age);
    return 0;
}
void Happy_Birthday(int *p){ //call by reference 
    (*p)++;
}