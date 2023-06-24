#include<stdio.h>
#include<conio.h>
main()
{
  float unit,a,b,c,d,e,f,g,h,i,j,k;

  clrscr();

  printf("Enter Electricity Units : \n");
  scanf("%f",&unit);

  if(unit <= 50)
  {
     a= unit*0.50;
     printf("Your ELectricity bill is %f\n",a);
  }
  else if(unit<=100)
  {
    b=50*(0.50);
    c=unit-50;
    d=c*(0.75);
    a=b+d;
    printf("Your Electricity Bill is %f\n",a);
  }
  else if(unit<=250)
  {
    b=50*(0.50);
    c=unit-50;
    d=c*(0.75);
    e=unit-150;
    h=e*(1.20);
    a=b+d+e;
    printf("Your Electricity Bill is : %f\n",a);
  }
  else
  {
  0
  ...............
    b=50*(0.50);
    c=unit-50;
    d=c*(0.75);
    e=unit-150;
    h=e*(1.20);
    i=unit-250;
    j=unit*(1.50);
    a=b+d+h+j;
    printf("Your Electricity Bill is : %f\n",a);

    k=(a*20)/100;
   printf("Your Electricity Bill is : %f\n",k);
  }
 getch();
}