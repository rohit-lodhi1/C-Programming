void main()
{
  int a[]={2,3,4,0,6,7,8,11,1};
  int i,max=a[0],max1,b=sizeof(a)/sizeof(int);
  clrscr();
  for(i=0;i<b;i++)
  {

     if(max>=a[i])
     {
       max1=max;
	max=a[i];
     }
     else
     if(a[i]<=max1)
     {
       max1=a[i];
     }
  }
      printf("%d %d",max,max1);
  getch();
}

/*
void insert(char s[],int ind,char ch[])
{
   int i,j,a=0,size=strlen(s)-1;
   L:
   for(i=size;i>=ind;i--)
   {
      s[i+1]=s[i];
      if(!(ind+strlen(ch)-1==' '))
      goto L;
   }
   for(j=ind;j<=strlen(ch)-1;j++)
   {
      s[j]=ch[a++];
   }
}

void main()
{
   char s[]="hello dollop",ch[]="hi ";
   int i;
   for(i=0;s[i]!=0;i++)
   {
      if(s[i]==' ')
      {
	 insert(s,i,ch);
	 break;
      }
   }
   printf("%s",s);
   getch();
}
  */




/*
//static int i=1,f=0;
void fab()
{
     static int i=1,f=0;
      int j,c=0,n=28,a=4;
//   printf("\t\t\t\t\tFABURARY\n\n");
  //  printf("\033[1;36m");
  //  printf("SUN MON TUE WED THU FRI SAT");
     for(;i<=n;i++)
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
     printf("%*d",a,i);
     if(i==4||i==11||i==17||i==18||i==25)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");

     if(c==7)
     {
       c=0;
       printf("\n");
       break;
  }

  }


}
void main()
{
   int i,c=0,n=31,a=4;
clrscr();
      printf("\033[1;31m");
   printf("\tJANUARY\t\t\t\tFABURARY\n");
    printf("\033[1;36m");
   printf("  SUN MON TUE WED THU FRI SAT");
      printf("\tSUN MON TUE WED THU FRI SAT\n");
   printf("\033[0m");
     for(i=1;i<=n;i++)
  {

     c++;
     printf("% *d",a,i);
     if(i==7||i==13||i==14||i==21||i==25)
     {
       printf("\033[1;33m");
     }
     else
      printf("\033[0m");


  //   printf("\033[0m");
     if(c==7)
     {
       c=0;
       printf("     ");
       fab();

     }

  }


   getch();
}
*/

/*
void main()
{
  int a[3][3]={1,2,3,4,5,6,7,8,9},b[3][3];
  int i,j;
  clrscr();
  for(i=0;i<=2;i++)
  {
     for(j=0;j<=2;j++)
     {
	b[i][j]=a[j][i];
	printf("%d ",b[i][j]);
     }
   printf("\n");
  }
  getch();
}
 */
/*
void main()
{
   int i,j,f=0,n=28,c=0,a=4;
   clrscr();
   printf("\t FABURARY\n\n");
   printf(" SUN MON TUE WED THU FRI SAT");
    printf("\n");
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
      printf("%*d",a,i);


   if(c==7||i==4)
   {
     c=0;
     printf("\n");
   }

  }

 getch();
} */
/*
void main()
{
  char s[]="SMTWTFS";
  int i,j,a=1,n,b=4;
  clrscr();
  printf("entre the date");
  scanf("%d",&n);
  while(n>31)
  {
 xc    printf("PLEASE ENTRE VALID DATE\n");
   void main()
{
   int n,n1,n2;        d`	jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj

   aaayy vardhan mg
   2321	w		eeetruCV M N      l/      jhmhvm
   long float a,b;                          ;lkug
   printf("entre the numbers");
   GFGASDf12b1h235342543u57421`;
   clrscr();
   a=n*n1;
   b=a*n2;
   printf("%lf",b);
   getch();

}




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
} */
/*
void pol(char s[],int ind)
{
  int i=ind,f=0,l=strlen(s)-1;
  while(i<l)
  {
   if(s{i]!=s[l])
   {
     f=1;
     return 0;
   }
   else
   if(f==0)
   printf("%c",s[i]);
   i++;
   l--;
  }

}
void main()
{
  char s[]="abcacba";
  int i;
  for(i=0;s[i]!=0;i++)
  {
    pol(s,i);
  }
getch();

} */



/*
void main()
{
   int i,j,n=7;
   clrscr();
   for(i=0;i<=n;i++)
   {
     for(j=0;j<=n;j++)
     {
	if(j==n-2+1 && i==n/2+1||i==n/2+1 && j==0||j==n/2 && i<=n/2+1|| i+j==n && i>n/2+1|| i==n-1 && j==n/2+1 || i==n && j==n/2+2 || i==n/2 && j+1<=n/2+3 || i==0 && j==n/2-1|| i==0 && j==n/2+1|| i==1 && j==n/2+1 || i==1 && j==n/2-1 )
	  printf("*");
	else
	  printf(" ");

      //	if(i==0 && j==0 || i==1 && j==0)
       //	  printf(" ");
     }
     printf("\n");
   }
getch();
} */



/*
int pow(int n,int pw)
{
  int i,p=1;
  for(i=1;i<=pw;i++)
  {
    p=p*n;
  }
 return p;
}
void bit(int bin[])
{
  int s=0,i=7;
  while(i>=0)
  {
   s=s+bin[i]*pow(8,7-i);
   i--;

  }
  printf("%d",s);

}

void main()
{
  int bin[8]={0,0,0,0,0,1,4,4};
  clrscr();
  bit(bin);

getch();
}
  */
/*
void main()
{
   int i,r,n=10,c=15,b[16]={0};
   clrscr();
   while(n!=0)
   {
     r=n%2;
     b[c--]=r;
     n=n/2;

   }
  while(c<=15)
  printf("%d",b[c++]);
  getch();
} */
  /*
void main()
{
  int a,n,n1;
  clrscr();

  printf("press 1 for factorial\npress 2 for squar\npress 3 for cube\npress 4 for pow\npress 5 for chech armstrong") ;
  scanf("%d",&a);
  printf("entre the num") ;
  scanf("%d ",&n);
  switch(a)
  {
    case 1:
    {
       int a=1,i,b=1;
       for(i=1;i<=n;i++)
       {
	  a=i*a;
       }
       printf("%d ",a);
     //  int a=1,i;
       for(i=1;i<=n1;i++)
       {
	  b=i*b;
       }
       if(b!=0)
       printf("%d",b);
	break;
    }
    case 2:
    {
      printf("%d",n*n);
      printf("%d",n1*n1);
      break;

    }
    case 3:
    {
      printf("%d",n*n*n);
      printf("%d",n1*n1*n1);
      break;
    }
    case 4:
    {
      int i,p=1;
      for(i=1;i<=n1;i++)
      {
	p=p*n;

      }
       printf("%d",p);
       break;
    }
}
getch();
}  */

/*
void main()
{
   int i,n=5,j;
   clrscr();
   for(i=0;i<n;i++)
   {
       printf("%d",i+1);
       if(i<n-1)
       printf("+") ;


   }
   getch();

} */


/*
int main()
{
  static int a=25;
  void cdecl conv1();
  void pascal conv2();
  conv1();
  conv2();
}
void cdecl conv1(int a,int b)
{
  printf("%d %d",a,b);
}

void pascal conv2(int a,int b)
{
  printf("%d %d",a,b);
}

  */


/*
int swap(char s[],int ind)
{
  char ch;
  int i=ind;
  for(i=0;i<=strlen(s)-2;i++)
  {
     ch=s[i];
     s[i]=s[i+1];
     s[i+1]=ch;
     printf("%s\n",s);
  }
}
void main()
{
   char s[]="abcd";
   int i,c=strlen(s);
   clrscr();
   for(i=0;s[i]!=0;i++)
   {
      swap(s,i);
   }
getch();
} */
/*
int get(char s[],int ind)
{
  char w[10];
  int i=ind,c=0,t;
  while(1)
  {
    if(s[i+1]==' ' || s[i+1]==0)
    {
     return i;


    }
    c++;
    w[t++]=s[i];
    i++;
  }

}

int pol(char s[],int ind)
{
  int i=1,t=ind,l=get(s,i),c=0,m=l/2;
  while(t<l)
  {
    if(s[t++]!=s[l--])
    {
      i=0;
      return 0;
    }
    c++;


  }
  if(i==1)
  return c;

}

void main()
{
   char s[]="naman naman";
   int i,m;
   clrscr();
   for(i=0;s[i]!=0;i++)
   {
     if(s[i-1]==' ' || i==0)
     {

       if(pol(s,i))
       {

	 printf("%s is pollindrom\n",s) ;
       }
       else
       printf("%s is not pollindrom",s);
     }


   }

    getch();
}
  */









/*
int count(char s[],int ind)
{




}



void main()
{
   char s[]="SUMIT";
   int i,n=26;
   for(i=0;s[i]!=0;i++)
   {
      count(s,i);

   }


} */

/*
void main()
{
  int n;
  clrscr();
  printf("press 1 to 3");
  scanf("%d",&n);
  switch(n)
  {
    case(1):
    printf("hello dollop ");
    break;
    case(2):
    printf("hello world ");
    break;
    case (3):
    printf("shut up");
    break;
    default:
    printf("try again!");
      break;

  }
    getch();

} */


/*void main()
{
  int i,a=1,n1,n2,max,l;
  clrscr();
  printf("entre the no");
  scanf("%d %d",&n1,&n2);
  max=n1>n2?n1:n2;

  while(a)
  {
     if((max%n1==0)&&(max%n2==0))
     {
       l=max;
       printf("%d %d lcm is %d",n1,n2,l);
       break;
     }
    ++max;
 }
 getch();

} */

/*
void main()
{
  int i,j,n,a;
  clrscr();
  printf("entre the no");
  scanf("%d",&n);

  for(j=1;j<=n;j++)
  {
    for(i=1;i<=9;i++)
    {

      if(j%i==0)
	a=1;
      else
      {
	a=0;
	break;
      }
    }
      if(a==1)
  printf("%d is divisible\n",j);

  }

  getch();

} */