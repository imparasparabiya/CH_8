#include<stdio.h>
#include<conio.h>

void main()

{
   int a,b,c;
   clrscr();
   printf("Enter a Value A =");
   scanf("%d",&a);
   printf("Enter a Value B =");
   scanf("%d",&b);
   printf("Enter a Value C =");
   scanf("%d",&c);
   (a>b)?(a>c)?printf("A is Big") : printf("C is Big")
	:(b>c)?printf("B is Big") : printf("C is Big");

    getch();

}