int table(int n)
{
int i;
for(i=1;i<=10;i++)
{
printf("%d*%d->%d\n",n,i,n*i);
}
}
void main()
{
int n=9;
clrscr();
table(n);
getch();
}