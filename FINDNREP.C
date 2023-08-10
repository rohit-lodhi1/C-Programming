int find(char s[],char ch, char r)
{
  int i,size=strlen(s);
  for(i=0;i<=size;i++)
  {
    if(s[i]==ch)
    {
      s[i]=r;
    }
  }
  }

void main()
{
char s[]="hello world",ch='l',r='d';
clrscr();
find(s,ch,r);
printf("%s",s);
getch();
}
