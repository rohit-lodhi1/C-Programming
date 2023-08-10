int count(char s[],char ch)
{
  int j,c=0;
  for(j=0;s[j]!=0;j++)
  {
    if(ch==s[j])
    {
      c++;
    }
  }
   return c;
}

void main()
{
  char s[]="hello this is dollop";
  int i,j,c,max=0;
  char ch;
  clrscr();
  for(i=0;s[i]!=0;i++)
  {
    c=count(s,s[i]);
    if(max<c)
    {
      max=c;
      ch=s[i];

    }

  }
   printf("%c-> %d",ch,max);
   getch();
}
}