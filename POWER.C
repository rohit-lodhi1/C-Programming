#include<stdio.h>
#include<conio.h>
int pow(int n,int pw)
{
int i,p=1;
for(i=1;i<=pw;i++)
{
p=p*n;
}
return p;
}
void main()
{
printf("%d",pow(2,5));
getch();
}