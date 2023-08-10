



/*
void main()
{
   float n,in,p,pr,emi;
   clrscr();
   puts("Enter amount of loan");
   scanf("%f",&n);
   puts("Entre interest annual");
   scanf("%f",&in);
   puts("period of loan");
   scanf("%f",&pr);

   p=n/pr;
   p=p*in/100;
   p=p*pr/12;
   emi=n/pr+p;

   printf("Emi %f",emi);
   getch();
}

*/

/*
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
   int i;
      clrscr();
	textcolor(RED);
   textbackground(WHITE);

      for(i=1;i<=10;i++)
      {
   delay(200);
    cprintf("I love you \3");
     }
   getch();
}
 */


/*
void main()
{
   char s[]="ANkit YaDav";
   int i,c=0,a=0;
   clrscr();
   for(i=0;s[i]!=0;i++)
   {
     if(s[i]>=65 && s[i]<=90)
     {
      c++;
     }
     else
     if(s[i]>=97 && s[i]<=122)
     a++;

   }
   printf("%d is capital\n %d is small",c,a);
   getch();

} */

/*x
int count(char s[],int ind)
{
   char a;
   int i,n=26,b,t=ind;
   for(i=1;i<=n;i++)
   {
     a=64+i;
     b=96+i;
     if(s[t]==a||s[t]==b)
     {
      return i;
     }
   }

}




void main()
{
   char s[100];
   int i;
   clrscr();
   printf("entre the name");
   gets(s);

   for(i=0;s[i]!=0;i++)
   {
     if(s[i]!=' ')
     printf("%c-> %d\n",s[i],count(s,i));
     else
     printf("\n");

   }

 getch();
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
/*
void main()
{
  char s[]="123456",t;
  int i,l=strlen(s)-2;
  clrscr();
  for(i=1;i<=l/2+1;i++)
  {
    t=s[i];
    if(s[i]!=s[l])
    {
     s[i]=s[l];
     s[l]=t;
     l--;

    }

  }
  printf("%s",s);
  getch();

} */

/*
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
} */

/*
int count(char s[],int ind,int last)
{
  int i,c=0;
  for(i=ind;i<=last;i++)
  {
    c++;


  }

   printf("%s->%d\n",s,c);
}
void last(char s[],int ind)
{
  int i,c;
  for(i=ind;s[i]!=0;i++)
  {
    if(s[i+1]==' ' || s[i+1]==0)
    c=count(s,ind,i);

  }


}
void main()
{
  char s[]="hello hi";
  int i;
  clrscr();
  for(i=0;s[i]!=0;i++)
  {
    if(s[i-1]==' ' || i==0)
    {
      last(s,i);
    }

  }
    getch();
} */
/*
void str(char s[])
{

  int r=0,l=strlen(s)-1,t;
  while(r<l)
  {
     t=s[r];
     s[r]=s[l];
     s[l]=t;
     r++;
     l--;
  }


}

void revStr(char s[],int ind)
{
  int r=ind,l=rev(s,ind),t;
  while(r<l)
  {
     t=s[r];
     s[r]=s[l];
     s[l]=t;
     r++;
     l--;
  }


}
int rev(char s[],int ind)
{
  int i;
  for(i=ind;s[i]!=0;i++)
  {
    if(s[i+1]==' ' || s[i+1]==0)
    {
      return i;
    }
  }
}

void main()
{
  char s1[]="ankit yadav";
  int i;
    clrscr();
     str(s1);
 for(i=0;i<strlen(s1);i++)
 {
   if(s1[i-1]==' ' || i==0)
   {
    revStr(s1,i);
  //  printf("%s",s1);
   }

 }
   printf("%s",s1);
  getch();

}    */


/*void main()
{
  char s[]="1234";
  int i,r,n=s[2];
  clrscr();

  {
    s[2]=s[1];
    s[1]=n;

  }
   printf("%s",s);
   getch();

} */





/*int count(char s[],char ch)
{
  int i,c=0,size=strlen(s);
  for(i=0;i<size;i++)
  {
     if(s[i]==ch)
     c++;

  }
  return c;
}


int isRep(char s[],char ch,char ind)
{
  int i;
  for(i=ind;i>=0;i--)
  {
    if(s[i]==ch)
    return 0;

  }
   return 1;
}
void main()
{
  char s[]="hello dollop";
  int i,c;
  clrscr();
  for(i=0;s[i]!=0;i++)
  {
     if(isRep(s,s[i],i-1)==1)
     {
      c=count(s,s[i]);
      printf("%c=%d\n",s[i],c);
     }
  }
   getch();
}
 */
/*void main()
{
  char s1[]="hello",s2[]="dollop",s3[]="info";
   int i,s=strlen(s1),l=strlen(s2);
   clrscr();
   for(i=0;s2[i]!=0;i++)
   {
       s1[s++]=s2[i];

   }


   for(i=0;s3[i]!=0;i++)
   {
       s1[s++]=s3[i];

   }

   printf("%s",s1);

 getch();
}  */