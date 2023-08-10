void main()
{
  char s[100],ch[100];
    int i,j=0,a=0,b;
  clrscr();
  printf("CREATE PASSWORD\n");
    scanf("%s",&s);
    printf("THANKS :)\n");
    printf("Press 1 to Login\nPress 2 for Exit");
    scanf("%d",&b);
  switch(b)
  {
   case 1:
   {
      printf("Entre the password\n");
  scanf("%s",&ch);
  for(i=0;s[i]!=0;i++)
  {
    if(s[i]!=ch[j++])
    {
     printf("WRONG PASSWORD !\nTRY AGAIN");
      break;
    }
    else
     {
      i=0;
       for(j=0;ch[j]!=0;j++)
       {
	 if(ch[j]!=s[i++])
	 {
	      a=1;
	      j=0;
	     // printf("wrong password");
	      break;
	  }
       }
	if(a==0)
       {
	 printf("WELCOME :)\nTo C");
	 break;
       }
     }
  }
  }
  break;
  }

  getch();
}
