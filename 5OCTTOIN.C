int pow(int n,int pw)
{
 int i,p=1;
 for(i=1;i<=pw;i++)
 {
 p=p*n;
 }
 return p;
}

void octtoInt(int oct[])
{
  int s=0,i=7;
  while(i>=0)
  {
  s=s+oct[i]*pow(8,7-i);
  i--;
  }
  clrscr();
 printf("%d",s);
}
void main()
{
int oct[8]={0,0,0,0,0,1,4,4};
octtoInt(oct);
getch();
}