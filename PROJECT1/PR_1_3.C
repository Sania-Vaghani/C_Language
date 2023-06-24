#include<stdio.h>
#include<conio.h>
main()
{
   int a;
   int b;
   int c;
   clrscr();

   printf("Enter First Angle :");
   scanf("%d",&a);

   printf("Enter Second Angle :");
   scanf("%d",&b);

   c=180-(a+b);

   printf("Third Angle is : %d",c);

   getch();

}