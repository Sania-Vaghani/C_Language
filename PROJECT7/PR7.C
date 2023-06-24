#include <stdio.h>
void addition(int x,int y)
{
    printf("\nAddition of %d and %d is : %d ",x,y,x+y);
}
void subtraction(int x, int y)
{
    printf("\nSubtraction of %d and %d is : %d ",x,y,x-y);
}
void multiplication(int x, int y)
{
    printf("\nMultiplication of %d and %d is : %d ",x,y,x*y);
}
void division(int x, int y)
{
    printf("\nDivision of %d and %d is : %d ",x,y,x/y);
}
void modulo(int x, int y)
{
    printf("\nRemainder of %d and %d is : %d ",x,y,x%y);
}

main()
{   
    program:
      int user;
      int first_num,second_num;
      printf("Press 1 for Addition.\n");
      printf("Press 2 for Subtraction.\n");
      printf("Press 3 for Multiplication.\n");
      printf("Press 4 for Division.\n");
      printf("Press 5 for Modulo.\n");
      printf("Press 0 for Exit.");
    
      printf("\n");

      printf("\nEnter Any Number : ");
      scanf("%d",&user); //user input
    
      printf("\n");

      switch(user)
      {
          case 1 :
            printf("Enter First Number : ");
            scanf("%d",&first_num);
            printf("Enter Second Number : ");
            scanf("%d",&second_num);
            addition(first_num,second_num);
            printf("\n\n-------------\n\n");
            goto program;

          case 2 : 
            printf("Enter First Number : ");
            scanf("%d",&first_num);
            printf("Enter Second Number : ");
            scanf("%d",&second_num);
            subtraction(first_num,second_num);
            printf("\n\n-------------\n\n");
            goto program;

          case 3 :
            printf("Enter First Number : ");
            scanf("%d",&first_num);
            printf("Enter Second Number : ");
            scanf("%d",&second_num);
            multiplication(first_num,second_num);
            printf("\n\n-------------\n\n");
            goto program;

          case 4 :
            printf("Enter First Number : ");
            scanf("%d",&first_num);
            printf("Enter Second Number : ");
            scanf("%d",&second_num);
            division(first_num,second_num);
            printf("\n\n-------------\n\n");
            goto program;

          case 5 :
            printf("Enter First Number : ");
            scanf("%d",&first_num);
            printf("Enter Second Number : ");
            scanf("%d",&second_num);
            modulo(first_num,second_num);
            printf("\n\n-------------\n\n");
            goto program;
        
          case 0 :
            break;

          default :
            printf("Invalid.");
            printf("\n\n-------------\n\n");
            goto program;
        
    }
}
