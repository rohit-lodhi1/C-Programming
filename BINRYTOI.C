int pow(int n,int pw)
{
int i,p=1;
for(i=1;i<=n;i++)
{
p=p*n;
}
return p;
}
void bintoInt(int bin[])
{
int s=0,i=15,j=0;
while(i>=0)
{
s=s+bin[i]*pow(2,15-i)
i--;
}
printf("%d",s);
}
void main()
{
int bin[16]={1,1,1,1,1,1,1,1,1};
bintoInt(bin);
getch();
}