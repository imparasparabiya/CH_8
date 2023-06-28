#include<stdio.h>
#include<conio.h>

main()
{
  int a,b;
  clrscr();
  printf("Enter a Value A = ");
  scanf("%d",&a);
  printf("Enter a Value B = ");
  scanf("%d",&b);
  (a>b) ?printf("A is Maximum Value",a)
	:printf("B is Maximum Value",b);
  getch();
}