int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}
void main()
{
int n=6;
clrscr();
fact(n);
printf("%d ",fact(n));
getch();
}