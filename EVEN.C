#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,r;
printf("Enter the number");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
n=n/10;
if(r%2==0)
printf("the even number is %d\n",r);
}
getch();
}