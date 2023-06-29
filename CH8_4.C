#include<stdio.h>
#include<conio.h>

void main()

{
  int a,b,c,d,e;
  clrscr();
  printf("Enter a Value A =");
  scanf("%d",&a);
  printf("Enter a Value B =");
  scanf("%d",&b);
  printf("Enter a Value C =");
  scanf("%d",&c);
  printf("Enter a Value D =");
  scanf("%d",&d);
  printf("Enter a Value E =");
  scanf("%d",&e);

  if(a<b)
  {
    if(a<c)
    {
     if(a<d)
     {
      if(a<e)
      {
       printf("A is Small");
      }
      else
      {
       printf("E is Small");
      }

     }
     else
     {
       if(d<e)
       {
	printf("D is Small");
       }
       else
       {
	printf("E is Small");
       }

     }

    }
    else
    {
       if(c<d)
       {
	 if(c<e)
	 {
	  printf("C is Small");
	 }
	 else
	 {
	  printf("E is Small");
	 }

       }
       else
       {
	 if(d<e)
	 {
	  printf("D is Small");
	 }
	 else
	 {
	  printf("E is Small");
	 }

       }

    }

  }
  else
  {
    if(b<c)
    {
      if(b<d)
      {
	if(b<e)
	{
	 printf("B is Small");
	}
	else
	{
	 printf("E is Small");
	}

      }
      else
      {
	if(d<e)
	{
	  printf("D is Small");
	}
	else
	{
	 printf("E is Small");
	}

      }

    }
    else
    {
      if(c<d)
      {
	if(c<e)
	{
	 printf("C is Small");
	}
	else
	{
	 printf("E is Small");
	}

      }
      else
      {
	if(d<e)
	{
	 printf("D is Small");
	}
	else
	{
	 printf("E is Small");
	}

      }

    }

  }


 getch();

}