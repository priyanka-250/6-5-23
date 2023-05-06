#include<stdio.h>
#include<conio.h>
main()
{
     int a=900,b=600,c=200,d=150;
     clrscr();
     if(a>b)
     {
	  if(a>c)
	  {
	      printf("a is maximum");

	  }
	  else
	  {
	      printf("c is maximum");
	  }
      }
      else
      {
	   if(b>d)
	   {
	       printf("b is maximum");
	   }
	   else
	   {
	       printf("d is maximum");

	   }
      }
      getch();
}
