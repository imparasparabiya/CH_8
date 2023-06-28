#include<stdio.h>
#include<conio.h>

void main()

{
   int a,b,c,d;
   clrscr();
   printf("Enter a Value A = ");
   scanf("%d",&a);
   printf("Enter a Value B = ");
   scanf("%d",&b);
   printf("Enter a Value C = ");
   scanf("%d",&c);
   printf("Enter a Value D = ");
   scanf("%d",&d);

   if(a<b)
   {
       if(a<c)
       {
	 if(a<d)
	 {
	  printf("A is Small");
	 }
	 else
	 {
	 printf("D is Small");
	 }

       }
       else
       {
	   if(c<d)
	   {
	    printf("C is Small");

	   }
	   else
	   {
	    printf("D is Small");
	   }

       }

   }
   else
   {
      if(b<c)
      {
	 if(b<d)
	 {
	  printf("B is Small");
	 }
	 else
	 {
	  printf("D is Small");
	 }

      }
      else
      {
	   if(c<d)
	   {
	     printf("C is Small");
	   }
	   else
	   {
	    printf("D is Small");
	   }

      }


   }



   getch();
}