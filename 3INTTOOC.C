void main()
{
int r,n=256,c=7,a[8]={0};
clrscr();

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