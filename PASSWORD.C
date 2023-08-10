
void main()
{
  char s[100],sh[100],ch[100];
    int i,j=0,a=0,b;
  clrscr();
  printf("CREATE PASSWORD\n");
    scanf("%s",&s);
//   i=0;
// for(j=0;s[j]!=0;j++)
// {
 //   ch[j]=s[i++];
// }
    printf("\nTHANKS :)\n");
    printf("Press 1 to Login\nPress 2 for Exit\n");
    scanf("%d",&b);
  switch(b)
  {
   case 1:
   {
   //	  int i,j=0,a=0;
      printf("Entre the password\n");
   sh[0]=getch();
   printf("%c",sh[0]);

  for(j=1;sh[j-1]!=0;j++)
  {
     if(j==10)
     {
       break;
     }

      sh[j]=getch();
       printf("\b*");
      printf("%c",sh[j]);
//      printf("\b*");
  }
//    scanf("%s",&ch);
   strcpy(ch,sh);
//    printf("%s",ch);
  j=0;
  for(i=0;s[i]!=0;i++)
  {
    if(s[i]!=ch[j++])
    {
     printf("\nWRONG PASSWORD !\nTRY AGAIN");
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
       }
       if(a==0)
       {
	 printf("\nWELCOME :)\nTo C");
	 break;
       }

  }
  }
  break;
  }

  getch();
}