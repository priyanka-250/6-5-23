#include<stdio.h>
#include<conio.h>
main()
{
       char w;
       clrscr();
       printf("press 's' to sunday");
       printf("\npress 'm' to monday");
       printf("\npress 't' to tuesday");
       printf("\npress 'w' to wednesday");
       printf("\npress 'T' to Thursday");
       printf("\npress 'f' to friday");
       printf("\npress 'S' to Saturday");
       printf("\n enter your day:-");
       scanf("%c",&w);
       switch (w)
       {
	      case 's' :
			printf("sunday");
			break;
	      case 'm' :
			printf("monday");
			break;
	      case 't' :
			printf("tuesday");
			break;
	      case 'w' :
			printf("wednesday");
			break;
	      case 'T' :
			printf("Thursday");
			break;
	      case 'f' :
			printf("friday");
			break;
	      case 'S' :
			printf("saturday");
			break;
	      default :
			printf("plz enter valid choice!");

       }
       getch();

}

