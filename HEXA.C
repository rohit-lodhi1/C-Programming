void main()
{
int r,n=64,a[4]={0},c=3;
clrscr();
while(n!=0)
{
   r=n%10;
   a[c--]=r;
   n=n/10;
}
while(c<=3)
printf("%d",a[c++]);
getch();
}