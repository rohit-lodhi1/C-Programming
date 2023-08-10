int countDigit(int n)
{
int c=0;
while(n!=0)
{
n=n/10;
c++;
}
return c;
}
void main()
{
int n=5677;
countDigit(n);
printf("%d",countDigit);
getch();
}