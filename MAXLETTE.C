void main()
{
char s[]="this is dollop";
int i,j,count,max=0;
char ch;
for(i=0;s[i]!='\0';i++)
{
  count=0;
  for(j=0;s[j]!=0;j++)
  {
    count++;
  }
   if(max<count)
   {
   max=count;
   ch=s[i];
   }
  }
printf("%c->%d",ch,max);
getch();
}