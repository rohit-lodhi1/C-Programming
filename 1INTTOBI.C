void main()
{
int r,n=10,c=15,a[16]={0};
clrscr();
while(n!=0)
{
r=n%2;
a[c--]=r;
n=n/2;
}
while(c<=15)
printf("%d",a[c++]);
getch();
}