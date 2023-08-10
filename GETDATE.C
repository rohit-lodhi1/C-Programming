#include<stdio.h>
#include<dos.h>

struct date dt;

void main()
{
   getdate(&dt);
   printf("%d %d %d",dt.da_day,dt.da_mon,dt.da_year);
   getch();
}
