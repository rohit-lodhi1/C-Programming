#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
   int i;
      clrscr();
	textcolor(RED);
   textbackground(WHITE);

      for(i=1;i<=10;i++)
      {
   delay(200);
    cprintf("I love you \3");
     }
   getch();
}