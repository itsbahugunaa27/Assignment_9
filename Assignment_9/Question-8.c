#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    switch(num>0)
    {
        case 0 : printf("%d\n",num*(-1));
                 break;
        case 1 : printf("%d\n",num*(-1));
                 break;
    }
    return 0;
}
