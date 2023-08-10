void main()
{
int r,n=35,b[16]={0},c=15;
clrscr();
while(n!=0)
{
r=n%2;
b[c--]=r;
n=n/2;
}
while(c<=15)
printf("%d",b[c++]);
getch();
}

