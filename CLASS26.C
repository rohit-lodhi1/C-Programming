void main()
{

  char s[]="INDIA";
  int i,j,n=strlen(s)-1;
  clrscr();
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("%c",s[j]);

    }
     printf("\n");

  }
  for(i=n;i>=0;i--)
  {
    for(j=0;j<=i;j++)
    {
      printf("%c",s[j]);

    }
    printf("\n");

  }
	   getch();

}