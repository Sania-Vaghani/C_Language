#include<stdio.h>
main()
{
   int a;
   int i=0;

   printf("Enter Any Value : ");
   scanf("%d",&a);

   while(a>0)
   {
     a=a/10;
     i++;
   }
   printf("Total Number of Digits : %d ",i);

}
