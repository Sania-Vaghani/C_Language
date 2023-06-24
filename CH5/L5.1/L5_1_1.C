#include<stdio.h>
#include<conio.h>
main()
{
   int a;
   int b;
   clrscr();

   printf("Enter value of First Number : ");
   scanf("%d",&a);

   printf("Enter value of Second Number : ");
   scanf("%d",&b);

   if(a<b)
   {
      printf("The Minimum value is : %d ",a);
   }
   else
   {
     printf("The Minimum value is : %d ",b);
   }

   getch();
}