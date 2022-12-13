#include<stdio.h>
int main()
{
    int day;
    printf("Enter the day of week\n");
    scanf("%d",&day);
    switch(day)
    {
        case 1:printf("Enjoy your own company instead of expecting some one else to make you happy.");
        break;
        case 2:printf("Anything is possible when you have the right people there to support you.");
        break;
        case 3:printf("Just one small positive thought in the morning can change your whole day.");
        break;
        case 4:printf("Quit the mind and the soul will speak.");
        break;
        case 5:printf("When you make a choice you change the future.");
        break;
        case 6:printf("You only live once, but if you do it right, once is enough.");
        break;
        case 7:printf("Have Faith….. Believe in yourself and what other’s think won’t matter.");
        break;
        default:printf("Invalid day");
    }
    return 0;
}
