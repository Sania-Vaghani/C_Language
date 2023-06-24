#include<stdio.h>
#include<conio.h>
main()
{
   int a;
   int b;
   int c;
   int d;
   int e;
   clrscr();

   printf("Enter Base Salary : ");
   scanf("%d",&a);

   printf("Enter HRA : ");
   scanf("%d",&b);

   printf("Enter DA : ");
   scanf("%d",&c);

   printf("Enter TA : ");
   scanf("%d",&d);

   e=a+b+c+d;

   printf("Gross Salary is :%d",e);
   getch();
}