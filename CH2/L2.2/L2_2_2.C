#include<stdio.h>
#include<conio.h>
main()
{
   int a;
   int b;
   int c;

   clrscr();

   printf("Enter The Length of The Rectangle : ");
   scanf("%d",&a);

   printf("Enter The Height of The Rectangle : ");
   scanf("%d",&b);

   c=a*b;

   printf("Area of The Rectangle is : %d",c);

   getch();
}