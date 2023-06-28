#include<stdio.h>
#include<conio.h>

void main()
{

  int a=15,b=25,c=53;
  clrscr();
  printf("Minimum Value");
  if(a<b)
  {
      if(a<c)
      {
	 printf("A is Small");
      }
  }
  {
     else
     {
       printf("C is Small");
     }
  }
  {
   else
   {
     if(b<c)
     {
       printf("B is Small");
     }
   }
   {
     else
     {
       printf("C is Small");
     }
   }

  }
  getch();
}