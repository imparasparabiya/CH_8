#include<stdio.h>
#include<conio.h>

void main()

{
  int a=3004,b=403,c=40,d=55;
  clrscr();
  printf("Maximum Value A,B,C,D\n");
  if(a>b)
   {
    if(a>c)
    {
	if(a>d)
	{
	 printf("A Is Big");
	}
	else
	{
	  printf("D Is Big");
	}
    }
    else
    {
	if(c>d)
	{
	 printf("C Is Big");
	}
	else
	{
	 printf("D Is Big");
	}

    }

   }
   else
   {
	if(b>c)
	  {
	   if(b>d)
	     {
	      printf("B Is Big");
	     }
	     else
	     {
	      printf("D Is Big");
	     }
	  }
	  else
	  {
	   if(c>d)
	     {
	      printf("C Is Big");
	     }
	     else
	     {
	      printf("D Is Big");
	     }

	  }

   }


  getch();

}