void main()
{
  int a;
  clrscr();

  scanf("%d %d",10,12);
  printf("%d",*(int*)10+*(int*)12);
  getch();


}

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