int charCount(char s[],char ch)
{
  int i,c=0,size=strlen(s);
  for(i=0;i<size;i++)
  {
    if(s[i]==ch)
    {
       c++;
    }
  }
  return c;
}
int isPre(char s[],char ch,char ind)
{
  int i;
  for(i=ind;i>=0;i--)
  {
     if(s[i]==ch)
     return 0;
   }
 return 1;
}

void main()
{
char s[]="hello this is dollop";
int i,c;
clrscr();
for(i=0;s[i]!=0;i++)
{
  if(isPre(s,s[i],i-1)==1)
  {
  c=charCount(s,s[i]);
  printf("%c->%d\n",s[i],c);
  }
  }

  getch();
}