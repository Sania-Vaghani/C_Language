#include<stdio.h>

main()
{
  int a,i,j=1;
  
  printf("Enter Any Number : ");
  scanf("%d",&a);

  for(i=1 ; i<=a ; i++)
  {
     j=j*i;
  }
   printf("The factorial is : %d ",j);
  
}
