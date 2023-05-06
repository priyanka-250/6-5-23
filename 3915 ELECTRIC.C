#include<stdio.h>
#include<conio.h>
main()
{

      int unit,bill,sr,totalamount;
      clrscr();

      printf("enter the electricity unit charges:");
      scanf("%d",&unit);

      if(unit<=50)
	{
	     bill=unit*0.50;
	}
	else if(unit<=150)
	{
	    bill=25+(unit-50)*0.75;
	}
	else if(unit<=250)
	{
	    bill=100+(unit-150)*1.20;
	}
	else
	{
	    bill=220+(unit-250)*1.50;
	}

	sr = unit*0.20;
	totalamount = (unit+sr);
	printf("electricity total bill %.2d",totalamount);

	getch();

}