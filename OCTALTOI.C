int pow(int n,int pw)
{
int i,p=1;
for(i=1;i<=pw;i++)
{
p=p*n;
}
return p;
}
void octtoint(int oct[])
{
int s=0,i=7;
while(i>=0)
{
s=s+oct[i]*pow(8,7-i);
i--;
}
printf("%d",s);
}
void main()
{
int oct[8]={1,4,4};
clrscr();
octtoint(oct);
getch();
}