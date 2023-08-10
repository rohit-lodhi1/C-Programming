void main()
{
  char s[]="hello hi how are",ch='r';
  int i,c=0,a=strlen(s);
  clrscr();
  for(i=0;i<strlen(s);i++)
  {
      c++;
     if(s[--a]==ch)
     {
     printf("%c->%d ind",s[a],a);
     break;
     }
  }

 getch();

}