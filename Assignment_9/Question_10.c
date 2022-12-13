#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the value of a,b and c\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    switch(d>0)
    {
        case 0 : switch(d==0)
        {
        case 0 :printf("Roots are Imaginary\n");
        break;
        case 1 : printf("Roots are Real and Equal\n");
        break;
        }
        break;
        case 1 :printf("Roots are real and complex\n");
        break;
    }
    return 0;
}
