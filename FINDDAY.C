void main()
{
  char s[]="SMTWTFS";
  int i,j,a=1,n,b=4;
  clrscr();
  printf("entre the date");
  scanf("%d",&n);
  while(n>31)
  {

  printf("PLEASE ENTRE VALID DATE\n");
  printf("entre the date");
  scanf("%d",&n);
  }

  clrscr();
  for(i=0;a<=n;i++)
  {


    for(j=0;s[j]!=0;j++)
    {
      if(a==n)
      {
	printf("% *d %c",b,a,s[j]);
	switch(j+1)
	{
	  case 1:
	  {
	    printf("un");
	    break;
	  }

	  case 2:
	  {
	    printf("on");
	    break;
	  }

	  case 3:
	  {
	    printf("ue");
	    break;
	  }

	  case 4:
	  {
	    printf("ed");
	    break;
	  }

	  case 5:
	  {
	    printf("hu");
	    break;
	  }

	  case 6:
	  {
	    printf("ri");
	    break;
	  }

	  case 7:
	  {
	    printf("at");
	    break;
	  }
       }
      }
      a++;
    }

  }

  getch();
}