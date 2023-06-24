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

   c=b*a*a;

   printf("Area of circle : %f",c);

   getch();
}