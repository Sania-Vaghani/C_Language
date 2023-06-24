#include<stdio.h>
 void multiplication(int a)
 {
 	printf("Cube is : %d",a*a*a);
 }
main()
{
	int x;
	
	printf("Enter any Number : ");
	scanf("%d",&x);
	
	multiplication(x);
}

