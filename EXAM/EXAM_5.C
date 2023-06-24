#include<stdio.h>
main()
{
    int a,b,c;
 
    printf("Enter a : ");
    scanf("%d",&a);

    printf("Enter b : ");
    scanf("%d",&b);

    printf("Enter c : ");
    scanf("%d",&c);
    
    (a==b && a==c) ? printf("All are same.") :
    (a==b) ? printf("a and b are same.") :
    (b==c) ? printf("b and c are same.") :
    (a<b) ? (a<c) ? printf("The Minimum Value is : %d ",a) : printf("The Minimum Value is : %d ",c)
  : (b<c) ? printf("The Minimum Value is : %d ",b) : printf("The Minimum Value is : %d ",c);
	 
}
