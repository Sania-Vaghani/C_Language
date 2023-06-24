#include<stdio.h>
#include<conio.h>
main()
{
   int a;

   clrscr();

   printf("Enter Any Number : ");
   scanf("%d",&a);

   if(a>0)
   {
      printf("The Number is Positive ");
   }

   else if(a<0)
   {
     printf("The Number is Negative ");
   }

   else
   {
     printf("The Number is Neutral");
   }




   getch();
}