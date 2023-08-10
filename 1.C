

#include<stdio.h>
struct node{
  int data;
  struct node *next;
}*list1,*list2,*list3,*start1=NULL,*current1=NULL,*start2=NULL,*current2=NULL,*start3=NULL,*current3=NULL;

int addAtLast(int data,int flag)
{
   struct node *temp;
//   int data;
  // puts("Entre the data");
//   scanf("%d",&data);
   temp=(struct node*)malloc(sizeof(struct node));
     temp->data=data;
     temp->next=NULL;
  if(flag==1)
  {
   if(start1==NULL)
      start1=temp;
   else
      current1->next=temp;
   current1=temp;
   temp=NULL;
  }
   else if(flag==2)
   {   if(start2==NULL)
	 start2=temp;
       else
      current2->next=temp;
   current2=temp;
   temp=NULL;
    }
   else if(flag==3)
   {   if(start3==NULL)
	 start3=temp;
       else
      current3->next=temp;
   current3=temp;
   temp=NULL;
  }
}

struct node* revByRecur(struct node *temp,struct node *current)
{
   struct node *revHead;
   if(temp==NULL||temp->next==NULL)
   {
      current=temp;
      return temp;
   }
   revHead=revByRecur(temp->next,current);
   temp->next->next=temp;
   temp->next=NULL;
   return revHead;
}

struct node* arrange(struct node *temp)
{
 struct node *temp1=temp->next,*temp2=temp->next->next;
 while(temp1!=NULL && temp2!=NULL)
 {
   if(temp->data<temp1->data&&temp1->data<temp2->data)
   {

   }
   else
   {
   temp1->next=temp2->next;
   temp2->next=temp1;
   temp->next=temp2;
   }
    temp=temp1;
    temp1=temp1->next;
    temp2=temp1->next;
 }
}

int ar(struct node *temp)
{
  struct node *temp1=temp->next;
  int var;
  while(temp->next!=NULL)
  {
    temp1=temp->next;
     while(temp1!=NULL)
     {
	if(temp->data>temp1->data)
	{
	  var=temp->data;
	  temp->data=temp1->data;
	  temp1->data=var;
//	  temp=temp1;
//	   break;
	}
	temp1=temp1->next;
     }
     temp=temp->next;
  }
}

void viewData(struct node *temp)
{
    while(temp!=NULL)
    {
      printf("%d ->",temp->data);
      temp=temp->next;
    }
    puts("NULL");
}
void main()
{
clrscr();
addAtLast(4,1);
addAtLast(3,1);
addAtLast(2,1);
addAtLast(1,1);
addAtLast(6,1);
addAtLast(5,1);
addAtLast(3,1);
addAtLast(10,1);
addAtLast(9,1);
addAtLast(8,1);
//addAtLast(2,2);
//addAtLast(4,2);
//addAtLast(6,2);
//addAtLast(8,2);
list1=start1;
//viewData(list1);
//puts("");
//list2=start2;
//viewData(list2);
printf("\n");
ar(list1);
//list3=start3;
viewData(list1);
getch();
}














/*
void viewData2(struct node *temp)
{
    while(temp!=NULL)
    {
	printf("%d ->",temp->data);
	temp=temp->next;
    }
    puts("NULL");
} */






/*
void main()
{
   int n,i;
    char *p=(int*)malloc(n*sizeof(char));
    clrscr();
   printf("Entre the range");
   scanf("%d",&n);
      printf("\nEntre the numbers");
   for(i=0;i<n;i++)
   {
      scanf("%s",p+i);
   }
	 printf("\nthe numbers");
      for(i=0;i<n;i++)
   {
	 printf("%s ",*(p+i));
   }
   getch();
}

*/





/*
#include<stdio.h>
struct course
{
    char *sub1;
    char *sub2;
};

struct student
{
   struct course *semFirst;
   int studentRoll;
   char *studentName;
};


void main()
{
    struct student *start,*start1;
    int i,size,n;
    clrscr();
    printf("Entre the Total number of student--");
    scanf("%d",&n);
    start=(struct student*)malloc(sizeof(struct student));
    start1=start+1;
    for(i=0;i<n;i++)
    {
	printf("\nEntre the RollNo--");
	scanf("%d",&start[i].studentRoll);
	printf("Entre the Name--");
	fflush(stdin);
	gets(start[i].studentName);
	printf("Entre the sub--");
	fflush(stdin);
	gets(start[i].semFirst[i].sub1);
    }

    for(i=0;i<n;i++)
    {
	printf("RollNo --%d\n",start[i].studentRoll);
	printf("Name --%s\n",start[i].studentName);
	printf("Entre the sub --%s\n",start[i].semFirst[i].sub1);
	getch();
    }
getch();
}

*/

/*
const char username[]="Rohitlodhi";
const char password[]="dollop123";
int session=0;

void login()
{
   char ch,user[20]={'\0'},pass[20]={'\0'};
   int i=0;
   printf("Entre username\n");
   scanf("%s",user);
   printf("Entre the Password\n");
   while(1)
   {
       ch=getch();
       if(ch==13)
	 break;
       else if(ch==8)
       {
	   printf("\b \b");
	   pass[i--]='\0';
       }
       else
       {
	  pass[i++]=ch;
	  printf("*");
       }
   }
   if(strcmp(user,username)==0 && strcmp(pass,password)==0)
   {
      session=1;
     printf("\nLogin succesful");
  }
  else
   printf("\nLogin failed");
}

void main()
{
 clrscr();
   login();
  getch();
}


*/

















/*
int isMobileValidlen(char *s)
{
   int i=0,digitcount=0;
   while(s[i++]!=0)
     digitcount++;

    return(digitcount==10);
}

int isNumber(char ch)
{
   return(ch>=48 && ch<=57);
}

int countDigit(char *s,char ch)
{
   int i=0,c=0;
   while(s[i]!=0)
   {
       if(s[i++]==ch)
       c++;
   }
   return c;
}

int isPresent(char *temp,char ch,int ind)
{
  int i=0;
  while(i<ind)
  {
     if(temp[i++]==ch)
     {
	return 1;
     }
  }
  return 0;
}


void mainMethod(char *s)
{
   int i,repcount=0,c=0;
   if(isMobileValidlen(s))
   {
      for(i=0;s[i]!=0;i++)
      {
	  if(isNumber(s[i]))
	  {
	     if(isPresent(s,s[i],i)==0)
	     {
		 c=countDigit(s,s[i]);
		 printf("\n%c - %d",s[i],c);
	     }
	  }
	  else
	   printf("Invalid");

      }
//      printf("\nValid");
   }
   else
   printf("invalid\n");

}
void main()
{
   char s[10];
   clrscr();
   printf("Entre the no.\n");
   scanf("%s",&s);
   mainMethod(s);
   getch();
}
*/


/*
int isMobilevalid(char s[])
{
   int i;
   for(i=0;s[i]!=0;i++)
   {
      if( strlen(s)<10 || (!(s[i]>=48 && s[i]<=57)) )
      {
	 printf("Invalid");
	 return 0;
      }
   }
   return 1;
}

int digitCount(char s[],char ch)
{
  int i,c=0;
  for(i=0;s[i]!=0;i++)
  {
     if(s[i]==ch)
     c++;
  }
 return c;
}

int isPresent(char s[],char ch,int ind)
{
   int i;
   for(i=ind;i>=0;i--)
   {
      if(s[i]==ch)
      return 0;
   }
   return 1;
}

void mainMethod(char s[])
{
    int i,c;
  if(isMobilevalid(s))
  {
     for(i=0;s[i]!=0;i++)
     {
	if(isPresent(s,s[i],i-1))
	{
	   c=digitCount(s,s[i]);
	   printf("%c-> %d\n",s[i],c);
	}
     }
  }

}

void main()
{
  char s[10];
    clrscr();
  printf("Enter the number\n");
  scanf("%s",&s);
  mainMethod(s);
 getch();
}
*/
/*
void main()
{
    int b,kb,mb,gb,a;
    clrscr();
    printf("entre to convert\nPress 1 gb to mb\nPress 2 to mb to kb\nPress 3 to kb to bytes\nPress 4 to mb to gb\nPress 5 to kb to mb\nPress 6 to bytes to kb\n");
    scanf("%d",&a);
    switch(a)
    {
	case 3:
	{
	  int mb,gb,a;
	  unsigned int b,kb;
	printf("Entre kb\n");
	scanf("%d",&kb);
	b=kb*1024;
	printf("%u Bytes\n",b);
	break;
	}
	case 2:
	{
	    unsigned int b,gb,a;
	    double kb,mb;
	    printf("Entre the mb");
	    scanf("%lf",&mb);
	    kb=mb*1024;
	    printf("%lf kb",kb);
	    break;
	}
	case 1:
	{

	    int b,kb,mb,gb,a;
	    printf("Entre the gb");
	    scanf("%d",&gb);
	    mb=gb*1024;
	    printf("%d mb",mb);
	    break;

	}
	case 4:
	{

	    int b,kb,a;
	    float gb,mb;
	    printf("Entre the mb");
	    scanf("%f",&mb);
	    gb=mb/1024;
	    printf("%f gb",gb);
	    break;
	}
	case 5:
	{

	    int b,a;
	    float kb,mb;
	    printf("Entre the kb");
	    scanf("%f",&kb);
	    mb=kb/1024;
	    printf("%f mb",mb);
	    break;
	}
	case 6:
	{

	    int a;
	    float kb,b;
	    printf("Entre the bytes");
	    scanf("%f",&b);
	    kb=b/1024;
	    printf("%f kb",kb);
	    break;
	}
     }
    getch();
}
*/

/*
void main()
{
   float n,n1;
   int a;
   clrscr();
   printf("Entre the price\n");
   scanf("%f",&n);
   printf("Entre the discount\n",&n1);
   scanf("%f",&n1);
   a=n*n1/100;
   printf("Final price%f\n",n-a);
   printf("You save - %d\n",a);
   getch();

}

*/

/*
void main()
{
  char s[20],s1[10],s2[30];
  int b,a=3;
  clrscr();
 printf("Entre name\n");
 scanf("%s",&s);
 L:
  printf("Entre the number\n");
  scanf("%s",&s1);
  if(strlen(s1)<10||strlen(s1)>10)
  {
     printf("invalid");
     goto L;
  }
  printf("Entre the email\n");
  scanf("%s",&s2);
  printf("press 1 for user info\npress 2 for exit\n\n");
  scanf("%d",&b);
  switch(b)
  {
     case 1:
     {
       printf("Name - %s\n",s);
       printf("Mobile no. - %s\n",s1);
      printf("Email - %s\n",s2);
       break;
     }
     default:
     {
	exit(1);
     }
  }
  getch();
} */
/*
int get(char s[],int ind)
{
   int i;
   for(i=ind;s[i]!=0;i++)
   {
      if(s[i+1]==' '||s[i+1]==0)
      return i;
   }
}

void pol(char s[],int ind)
{
   int a=0,st=ind,l=get(s,ind),j;
   while(st<l)
   {
      if(s[st]!=s[l])
      {
	 a=1;
	 for(j=st;j<=l;j++)
	 {

	 printf("%c",s[j]);

	 }
	 printf(" is not pollindram");
	 printf("\n");
	 break;
      }
      st++;
      l--;
   }
   if(a==0)
   {
   for(j=ind;j<=get(s,ind);j++)
   {
     printf("%c",s[j]);
   }
   printf(" is pollindram\n");
   }
}
void main()
{
  char s[]="naman suman rohit akaka";
  int i;
   clrscr();
  for(i=0;s[i]!=0;i++)
  {

    if(i==0||s[i-1]==' ')
       pol(s,i);
  }

  getch();
}
 */







/*
void main()
{
  char s[10],ch[10];
  int i,j;
    clrscr();
//  scanf("%s",&s);
  for(i=0;s[i-1]!=0;i++)
  {
     if(i==10)
     {
       break;
     }

      s[i]=getch();
      printf("%c",s[i]);
     printf("\b*");
  }
   i=0;
   strcpy(ch,s);
  printf("\n%s",ch);

  getch();
}

 */

/*
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
       printf("\b*");
  for(j=1;sh[j-1]!=0;j++)
  {
     if(j==10)
     {
       break;
     }

      sh[j]=getch();

      printf("%c",sh[j]);
      printf("\b*");
  }
//    scanf("%s",&ch);
   strcpy(ch,sh);
    printf("\n%s",ch);
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
} */

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