#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    int a,b,c;
    while(1)
    {
        printf("A. Isosceles traingle\n");
        printf("B. Right traingle\n");
        printf("C. Equilateral traingl\n");
        printf("D. Exit\n");
        fflush(stdin);
        scanf("%c",&choice);
        fflush(stdin);
        switch(choice)
        {
            case 'A' : printf("Enter three sides of traingle\n");
                     scanf("%d%d%d",&a,&b,&c);
                     if((a==b)||(b==c)||(c==a))
                     {
                         printf("Isosceles traingle\n");
                     }
                     else
                     {
                         printf("NOT\n");
                     }
                      break;
            case 'B' : printf("Enter three sides of traingle\n");
                       scanf("%d%d%d",&a,&b,&c);
                       if((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b))
                       {
                           printf("Right triangle\n");
                       }
                       else
                       {
                           printf("NOT\n");
                       }
                       break;
            case 'C' : printf("Enter three sides of traingle\n");
                       scanf("%d%d%d",&a,&b,&c);
                       if((a==b)&&(b==c))
                       {
                           printf("Equilateral traingle\n");
                       }
                       else
                       {
                           printf("NOT\n");
                       }
                       break;
            case 'D' : return 0;
                        break;
        }
    }
    return 0;
}

