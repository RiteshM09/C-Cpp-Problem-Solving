#include<stdio.h>
#include<string.h>
struct Book{
        int bookid;
        char title[20];
        float price;
};
struct Book input()
{
    struct Book b;
    printf("ENTER bookid: ");
    scanf("%d",&b.bookid);
    // when hit enter, the newline \n stays in the buffer.
    //fgets sees that leftover \n → thinks it’s input → stops instantly.
    fflush(stdin);// to pull the new line char(\n) use getchar() fun to clear it

    //fflush(stdin) or use this fun to clear the buffer if there is more than 1 character
    printf("enter title");
    fgets(b.title,50,stdin);
    
    b.title[strlen(b.title)-1]='\0';
    printf("\nenter price");
    scanf("%f",&b.price);
    return b;
}
void display(struct Book b1)
{
    printf("%d %s %2.f",b1.bookid, b1.title, b1.price);
}
int main()
{
    struct Book b1={1,"c in depth",350.0};  
    struct Book b2,b3;
    b2.bookid = 2; 
    strcpy(b2.title,"Java");
    b2.price = 350.99;
    b3=input();
    display(b1);
    printf("\n");
    display(b2);
    printf("\n");
    display(b3);

    return 0;
    // printf("print :  %d, %s, %2.f",b3.bookid,b3.title,b3.prices);
}

