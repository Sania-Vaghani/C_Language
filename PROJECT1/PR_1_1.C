#include<stdio.h>
#include<conio.h>
main()
{
   int C;
   float F;
   clrscr();

   printf("Enter The Temperature in Celsius :");
   scanf("%d",&C);

   F=(C*9/5)+32;

   printf("The Temperature in Fahrenheit is : %f",F);

   getch();
}