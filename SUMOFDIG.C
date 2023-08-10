#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,r,s=0;
printf("entre the number");
scanf("%d",&n);
for(i=0;i=n;i++)
{
r=n%10;
n=n/10;
s=s+r;
}
printf("sum is %d",s);
getch();
}