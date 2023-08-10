
void main()
{
   int a;
   clrscr();
   L:
   printf("Entre the month number\n");
   scanf("%d",&a);
   if(a>12)
   {
     printf("Plese Entre valid number\n");
     goto L;
   }

   switch(a)
   {
      case 1:
      {

  int i,n=31,c=0,a=4;
  clrscr();
     printf("\033[1;31m");
  printf("\t   JANUARY\n\n");
      printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT\n");
   printf("\033[1;33m");
  for(i=1;i<=n;i++)
  {

     c++;
     printf("% *d",a,i);
     if(i==7||i==13||i==14||i==21||i==25)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[37m");


  //   printf("\033[0m");
     if(c==7)
     {
       c=0;
       printf("\n");
     }
  }
     break;
      }

     case 2:
     {

  int i,n=28,c=0,f=0,j,a=4,b=17;
  clrscr();
     printf("\033[1;31m");
  printf("\t   FABURARY\n\n");
      printf("\033[1;36m");
   printf(" SUN MON TUE WED THU FRI SAT\n");

  printf("\033[0m");
  printf("  29  30  31");
   printf("\033[1;33m");
  for(i=1;i<=n;i++)
  {

    //   if(f==0)
   //  {
     //  for(j=1;j<=12;j++)
      // {
     //	 printf(" ");
       //	 f=1;
     //  }
   //  }
     c++;
     printf("%*d",a,i);
     if(i==4||i==11||i==17||i==18||i==25)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[37m");

     if(c==7||i==4)
     {
       c=0;
       printf("\n");
     }
  }
     printf("\033[0m");
   printf("   1   2   3   4");
   break;
     }
     case 3:
     {

  int i,n=31,f=0,j,c=0,a=4;
  clrscr();
     printf("\033[1;31m");
  printf("\t   MARCH\n\n");
       printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT\n");
 printf("\033[0m");

  for(i=1;i<=n;i++)
  {
	if(f==0)
     {
       for(j=1;j<=12;j++)
       {
	 printf(" ");
	 f=1;
       }
     }
      c++;
     printf("% *d",a,i);
     if(i==4||i==7||i==11||i==18||i==25||i==29)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");

     if(c==7||i==4)
     {
       c=0;
       printf("\n");
     }
  }
	 break;
     }
     case 4:
     {

  int i,n=30,f=0,j,c=0,a=4;
  clrscr();
     printf("\033[1;31m");
  printf("\t   APRIL\n\n");
       printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT\n");
  printf("\033[0m");
  for(i=1;i<=n;i++)
  {
	if(f==0)
     {
       for(j=1;j<=24;j++)
       {
	 printf(" ");
	 f=1;
       }
     }
      c++;
     printf("% *d",a,i);
     if(i==1||i==6||i==8||i==13||i==15||i==21||i==22||i==29)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");

     if(c==7||i==1)
     {
       c=0;
       printf("\n");
     }
  }
	 break;
    }


     case 5:
     {

  int i,n=31,f=0,j,c=0,a=4;
  clrscr();
     printf("\033[1;31m");
  printf("\t     MAY\n\n");
       printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT\n");
 printf("\033[0m");

  for(i=1;i<=n;i++)
  {
	if(f==0)
     {
       for(j=1;j<=4;j++)
       {
	 printf(" ");
	 f=1;
       }
     }
      c++;
     printf("% *d",a,i);
     if(i==4||i==6||i==13||i==20||i==27)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");

     if(c==7||i==6)
     {
       c=0;
       printf("\n");
     }
  }
	 break;
     }

     case 6:
     {

  int i,n=30,f=0,j,c=0,a=4;
  clrscr();
     printf("\033[1;31m");
  printf("\t   JUNE\n\n");
       printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT\n");
 printf("\033[0m");

  for(i=1;i<=n;i++)
  {
	if(f==0)
     {
       for(j=1;j<=16;j++)
       {
	 printf(" ");
	 f=1;
       }
     }
      c++;
     printf("% *d",a,i);
     if(i==3||i==10||i==17||i==24||i==28)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");

     if(c==7||i==3)
     {
       c=0;
       printf("\n");
     }
  }
	 break;
     }

     case 7:
     {

  int i,n=31,f=0,j,c=0,a=4;
  clrscr();
     printf("\033[1;31m");
  printf("\t   JULY\n\n");
       printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT\n");
 printf("\033[0m");

  for(i=1;i<=n;i++)
  {
	if(f==0)
     {
       for(j=1;j<=24;j++)
       {
	 printf(" ");
	 f=1;
       }
     }
      c++;
     printf("% *d",a,i);
     if(i==1||i==8||i==15||i==22||i==28||i==29)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");

     if(c==7||i==1)
     {
       c=0;
       printf("\n");
     }
  }
	 break;
     }


     case 8:
     {

  int i,n=31,f=0,j,c=0,a=4;
  clrscr();
     printf("\033[1;31m");
  printf("\t   AUGUST\n\n");
       printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT\n");
 printf("\033[0m");

  for(i=1;i<=n;i++)
  {
	if(f==0)
     {
       for(j=1;j<=8;j++)
       {
	 printf(" ");
	 f=1;
       }
     }
      c++;
     printf("% *d",a,i);
     if(i==5||i==12||i==14||i==19||i==26||i==28||i==29)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");

     if(c==7||i==5)
     {
       c=0;
       printf("\n");
     }
  }
	 break;
     }

     case 9:
     {

  int i,n=30,f=0,j,c=0,a=4;
  clrscr();
     printf("\033[1;31m");
  printf("\t   SEPTEMBAR\n\n");
       printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT\n");
 printf("\033[0m");

  for(i=1;i<=n;i++)
  {
	if(f==0)
     {
       for(j=1;j<=20;j++)
       {
	 printf(" ");
	 f=1;
       }
     }
      c++;
     printf("% *d",a,i);
     if(i==2||i==5||i==9||i==16||i==23||i==29)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");

     if(c==7||i==2)
     {
       c=0;
       printf("\n");
     }
  }
	 break;
     }

     case 10:
     {

  int i,n=31,f=0,j,c=0,a=4;
  clrscr();
     printf("\033[1;31m");
  printf("\t   OCTOBAR\n\n");
       printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT\n");
 printf("\033[1;33m");

  for(i=1;i<=n;i++)
  {
	if(f==0)
     {
       for(j=1;j<=0;j++)
       {
	 printf(" ");
	 f=1;
       }
     }
      c++;
     printf("% *d",a,i);
     if(i==7||i==14||i==21||i==23||i==28)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");

     if(c==7)
     {
       c=0;
       printf("\n");
     }
  }
	 break;
     }

     case 11:
     {

  int i,n=30,f=0,j,c=0,a=4;
  clrscr();
     printf("\033[1;31m");
  printf("\t   NOVEMBAR\n\n");
       printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT\n");
 printf("\033[0m");

  for(i=1;i<=n;i++)
  {
	if(f==0)
     {
       for(j=1;j<=12;j++)
       {
	 printf(" ");
	 f=1;
       }
     }
      c++;
     printf("% *d",a,i);
     if(i==4||i==9||i==11||i==18||i==25)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");

     if(c==7||i==4)
     {
       c=0;
       printf("\n");
     }
  }
	 break;
     }

     case 12:
     {

  int i,n=31,f=0,j,c=0,a=4;
  clrscr();
     printf("\033[1;31m");
  printf("\t   DECEMBER\n\n");
       printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT\n");
 printf("\033[0m");

  for(i=1;i<=n;i++)
  {
	if(f==0)
     {
       for(j=1;j<=20;j++)
       {
	 printf(" ");
	 f=1;
       }
     }
      c++;
     printf("% *d",a,i);
     if(i==2||i==9||i==16||i==23||i==30)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");

     if(c==7||i==2)
     {
       c=0;
       printf("\n");
     }
  }
	 break;
     }
   }
 getch();
}
