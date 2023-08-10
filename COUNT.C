#include<stdio.h>
#include<conio.h>
int countdigit(int n)
{
int c=0;
while(n!=0)
{
n=n/10;
c++;
}
return c;
}
void main()
{
clrscr();
printf("%d",countdigit(12345));
getch();
}