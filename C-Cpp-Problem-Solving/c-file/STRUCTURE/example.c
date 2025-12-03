#include<stdio.h>
#include<string.h>
struct Book input();
struct Book{
        int bookid;
        char title[20];
        float price;
};
int main()
{
    struct Book b1={1,"c in depth",350.0};  
    struct Book b2,b3;
    b2.bookid = 2; 
    strcpy(b2.title,"Java");
    b3=input();
    
    
    // printf("print :  %d, %s, %2.f",b3.bookid,b3.title,b3.prices);

}
struct Book input()
{
    struct Book b;
    printf("ENTER bookid, title & price: ");
    scanf("%d",&b.bookid);
    fflush(stdin);
    fgets(b.title,50,stdin);
    b.title[strlen(b.title)-1]='\0';
    
    scanf("%f",&b.price);
    return b;
}

