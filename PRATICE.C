void main()
{
int r,n=100,c=7,a[8]={0};
while(n!=0)
{
r=n%8;
a[c--]=r;
n=n/8;
}
while(c<=7)
printf("%d",a[c++]);
getch();
}