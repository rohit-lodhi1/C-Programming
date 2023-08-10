int pow(int n,int pw)
{
int i,p=1;
for(i=1;i<=pw;i++)
{
p=p*n;
}
return p;
}
void main()
{
char s[5]="af";
int t=0,i,size=strlen(s);
for(i=0;i<size;i++)
{
if(s[size-i-1]>=48 && s[size-i-1]<=57)
{
t=t+(s[size-i-1]-48)*pow(16,i);
}
else if(s[size-i-1]>=65 && s[size-i-1]<=70)
{
t=t+(s[size-i-1]-55)*pow(16,i);
}
else if(s[size-i-1]>=97 && s[size-i-1]<=102)
{
t=t+(s[size-i-1]-87)*pow(16,i);
}
}
printf("%d",t);
getch();
}