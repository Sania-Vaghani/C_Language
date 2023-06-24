#include<stdio.h>
#include<conio.h>
main()
{
    float p;
    float r;
    float t;
    float a;

    clrscr();

    printf("Enter Initial Principal Balance :");
    scanf("%f",&p);

    printf("Enter Annual Interest Rate :");
    scanf("%f",&r);

    printf("Enter Time :");
    scanf("%f",&t);

    a=p*r*t/100;

    printf("Simple Intrest : %f",a);

    getch();

}