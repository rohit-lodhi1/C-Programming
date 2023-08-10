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

}
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