#include <stdio.h>
#include <string.h>
int main()
{

    char str[3][10];
    int i;
    printf("Enter 3 name: ");
    for (i = 0; i <= 2; i++)
    {
        fgets(str[i], 10, stdin);
        str[i][strlen(str[i]) - 1] = '\0'; // adjust new line characher for all 3 strings
    }
    printf("Print 3 names:");
    for (i = 0; i <= 2; i++)
        printf("%s ", str[i]);

    printf("\n");
    return 0;
}
