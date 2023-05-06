#include<stdio.h>
#include<conio.h>
main()
{
       char ch;
       clrscr();
       printf("enter any character:");
       scanf("%c",&ch);
       if(ch>='a' && ch<='z')
       {
	      printf(" alphabet");
       }
       else if (ch>='0' && ch<='10')
       {
	      printf("digit");
       }
       else
       {
	      printf(" spical character");
       }

       getch();

}