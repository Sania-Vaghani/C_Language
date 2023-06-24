#include<stdio.h>
#include<conio.h>
main()
{
   float a;
   float b=3.14;
   float c;

   clrscr();

   printf("Enter The Radius of The Circle : ");
   scanf("%f",&a);

   c=2*b*a;

   printf("Perimeter of Circle : %f",c);

   getch();
}