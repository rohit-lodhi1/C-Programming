int isEven(int n)
{
int r;
while(n!=0)
{
r=n%10;
n=n/10;
if(r%2==0)
printf("%d",r);
}
}
void main()
{
int n=3567;
clrscr();
isEven(n);
getch();
}