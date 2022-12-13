#include<stdio.h>
#include<stdlib.h>
int main()
{
    char choice;
    int x,y;
    while(1)
    {
	printf("A. Addition\n");
    printf("B. Substraction\n");
    printf("C. Multiplication\n");
    printf("D. Division\n");
    printf("E. Exit\n");
    fflush(stdin);
    scanf("%c",&choice);
    fflush(stdin);
   
    switch(choice)
    {
        case 'A': printf("Enter two numbers\n");
                  scanf("%d%d",&x,&y);
		          printf("Addition of %d and %d is %d\n",x,y,x+y);
                  break;
        case 'B': printf("Enter two numbers\n");
                  scanf("%d%d",&x,&y);
		  		  printf("Substraction of %d and %d is %d\n",x,y,x-y);
        		  break;
        case 'C': printf("Enter two numbers\n");
                  scanf("%d%d",&x,&y);
		          printf("Multiplication of %d and %d is %d\n",x,y,x*y);
                  break;
        case 'D': printf("Enter two numbers\n");
                  scanf("%d%d",&x,&y);
		          printf("Division of %d and %d is %d\n",x,y,x/y);
                  break;
        case 'E': return 0;
                  break;
    }
      }
    return 0;
}
