#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    switch(year%100==0)
    {
         case 0 : switch(year%4==0)
        {
            case 0 : printf("Non -Leap year\n");
            break;
            case 1 : printf("Leap year\n");
            break;
        }
        break;
        case 1 :
               switch(year%400==0)
        {
            case 0 : printf("Non leap year\n");
            break;
            case 1 : printf("Leap year\n");
            break;
        }
        break;
       }
    return 0;
}
