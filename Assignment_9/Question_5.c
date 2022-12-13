#include<stdio.h>
int main()
{
    int var;
    printf("Enter a value of var\n");
    scanf("%d",&var);
    switch(var)
    {
        case 1 : printf("Good\n");
        break;
        case 2 :printf("Better\n");
        break;
        case 3 :printf("Best\n");
        break;
        default : printf("Invalid\n");
    }
    return 0;
}
