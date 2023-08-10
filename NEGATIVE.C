void inttoBin()
{
int bin[16]={0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0};
int i=15,f=1;
while(i>=0)
{
(bin[i]=!bin[i]);
if(f==1)
{
if(bin[i]==1)
{
bin[i]=0;
}
else
{
bin[i]=1;
f=0;
}
}
i--;
}
for(i=0;i<=15;i++)
printf("%d",bin[i]);
}
void main()
{
clrscr();
inttoBin();
getch();
}