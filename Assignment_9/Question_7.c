#include<stdio.h>
int main()
{
    float unit,total,Final_total;
    printf("Enter the number of units\n");
    scanf("%f",&unit);
    switch(unit<50)
    {
    case 0 :  switch(unit<=150)
          {
              case 0 : switch(unit<=250)
              {
                case 0 : total=50*0.5+100*0.75+100*1.20+(unit-250)*1.50;
                break;
                case 1 :
                total=50*0.5+100*0.75+(unit-150)*1.20;
                break;
              }
                break;
              case 1 : total=50*0.5+(unit-50)*0.75;
              break;

           }
            break;
    case 1 :
        total=unit*0.5;
        break;
    }
    Final_total=total+total*0.2;
    printf("Final Total=%f",Final_total);
    return 0;
    }
