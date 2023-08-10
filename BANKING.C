#include<stdio.h>
#include<dos.h>
#include<time.h>

const char username[]="Rohitlodhi";
const char password[]="Rohit123";
const char accountNum[]="6263703637";
int session=0;
long int bal=10000;
int c=0;
int deposit;
int withdr;
struct stm{

     char accNo[10];
     char credit[20];
     char debit[20];
//     balance;
};

void dep()
{
  time_t t;
  time(&t);
  deposit=ctime(&t);
}

void wha()
{
  time_t t;
  time(&t);
  withdr=ctime(&t);
}

void ministatement()
{
   struct stm acc[2];
  //deposit;
     puts("time of depostie");
     printf("\n%s",deposit);
     puts("Time of withdrawl");
     printf("\n%s",withdr);
    getch();
}


void Checkbalance()
{
  printf("\nYour balance is --%ld",bal);
  getch();
}
void Deposit()
{

    long int am=0;
    printf("\nEntre amount --");
    scanf("%ld",&am);
    bal=bal+am;
    dep();
    printf("\nDeposited successfully");
    Checkbalance();
}
void Withdrawl()
{

    long int wd=0;
    L:
    printf("\nEntre the amount--");
    scanf("%ld",&wd);
    if(wd<=bal)
    {
	bal=bal-wd;
	wha();
	 printf("\nWithdrawl successfully");

	 Checkbalance();

    }
    else
    {
	 printf("\nNot Enough Balance !\nTry again !");
	goto L;
     }
}
void menu()
{

   int a;
   L:
   clrscr();
   printf("Welcome :) %s",username);
   printf("\n 1. Balance\n 2. Deposit\n 3. Withdrawl\n 4. Ministatement\n 5. Exit\n");
   scanf("%d",&a);
   switch(a)
   {
     case 1: Checkbalance(); break;
     case 2: Deposit(); break;
     case 3: Withdrawl(); break;
     case 4: ministatement(); break;
     case 5: exit(1); break;
     default: puts("Try again"); break;
   }
  goto L;

}

void login()
{
   struct stm account[1];
   char ch,user[20]={'\0'},pass[20]={'\0'};
   int i=0;
//   clrscr();
   printf("\nEntre the username\n");
   scanf("%s",user);
   printf("Entre the Password\n");
   while(1)
   {
      ch=getch();
      if(ch==13)
	break;
      else if(ch==8)
      {
	if(i>0)
	{
	  printf("\b \b");
	  pass[i--]='\0';
	}
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
    printf("\nLogin successfully");
    {
       A:
       printf("\nEntre the accountno");
       fflush(stdin);
       gets(account[0].accNo);
       if(strcmp(account[0].accNo,accountNum)==0)
	    menu();
       else
       {
	 puts("try again!");
	 goto A;
       }
    }
  }
  else
  {
    printf("\nLogin failed !\nTry again !\n");
    c++;
    if(c<=5)
    {
      login();
     }
     else
     {
       c=0;
       clrscr();
       printf("\nLogin failed !\nTry again after sometime\n");
//	delay(10000);
     }
   }
getch();
}

void main()
{
clrscr();
   login();
   getch();
}







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

int isPresent(char *temp,char ch)
{
  int i=0;
  while(temp[i]!=0)
  {
     if(temp[i++]==ch)
     {
	return 1;
     }
  }
  return 0;
}

int repeatDigitCount(char *s)
{
    int i=0,j=0,c=0;
    char temp[12];
    while(s[i]!=0)
    {
	temp[j]=0;
       if(isMobileValidlen(s) && isNumber(s[i]) && !isPresent(temp,s[i]))
       {
	  printf("%c = %d",s[i],countDigit(s,s[i]));
	  temp[j]=mobile[i];
	  j++;
       }
       else
       c++;
       i++;
    }
    if(c!=0)
    {
       printf(" %s Valid",s);
    }

}

void main()
{
   char s[10];
   clrscr();
   printf("Entre the number");
   scanf("%s",&s);
   repeatDigitCount(s);
   getch();
} */