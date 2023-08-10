#include<stdio.h>
#include "NEWBANK\includes\mydef.h"
#include "NEWBANK\lib\COMLIB.c"
#include "NEWBANK\view\menu.c"

struct date dt;

void miniStatement()
{
  miniStatementMenu();
   newLine(1);
   printf("%d %d %d",st->d->date,st->d->month,st->d->month,st->d->year);
   getch();
   temp->state=st;
   while(temp->state!=NULL)
   {
      if(temp->state->drAmt!=0)
      {
         printf("%12s","Your Account is Debited");
         printf("%30d",temp->state->drAmt);

      }
      newLine(1);
      if(temp->state->crAmt!=0)
      {
      printf("%12s","Your Account is credited");
      printf("%30d",temp->state->crAmt);
     }
        temp->state=temp->state->next;

   }
   getch();
}

void viewBalance()
{
   int accNo;
    clrscr();
 newLine(4);
    printf("\033[1;36m");   // blue
  printf("%47.20s","View Balance\n");
      lineDesigne(0);
  newLine(6);
  printf("\033[1;37m");      // white
  newLine(3);
  printf("%41.31s","Please Entre Your Account No :-");
  scanf("%d",&accNo);
  if(viewBal(accNo)==1)
  {
     if(c++<=2)
      viewBalance();
  }
  getch();
}


  void pendingList()
{
  int a;
  clrscr();
 newLine(2);
  printf("\033[1;36m");
  printf("%53.25s","Registration Pending List");
  newLine(3);
      lineDesigne();
      printf("%35.30s","1. View Pending List");
   printf("%27.20s","2. Active user\n\n");
   printf("%31.30s","3. Exit");
   scanf("%d",&a);
  switch(a)
  {
     case 1: viewPendingData();break;
     case 2: activeUser();break;
     case 3: return 1;
  }
}

void bankWithdra()
{

  int accNo,c=0;
 clrscr();
   newLine(2);
   printf("\033[1;36m");            //blue
   printf("%47.20s","Withdrawal\n");
   lineDesigne();
   newLine(2);
     printf("\033[1;37m");
   printf("%30.30s","Entre Account Number :-");
   scanf("%d",&accNo);
   withDra(accNo);
}

void bankDeposit()
{
 int accNo;
 clrscr();
   newLine(2);
   printf("\033[1;36m");            //blue
   printf("%47.20s","Deposit\n");
   lineDesigne();
   newLine(2);
     printf("\033[1;37m");
   printf("%30.30s","Entre Account Number :-");
   scanf("%d",&accNo);
   deposit(accNo);
}
void bankCreateAccount()
{
  char holder[20];
   clrscr();
   newLine(2);
   printf("\033[1;36m");            //blue
   printf("%47.20s","Create Account\n");
temp=(struct netBanking*)malloc(sizeof(struct netBanking));
   lineDesigne();
   newLine(2);
     printf("\033[1;37m");
   printf("%30.30s","Entre Account Holder Name :-");
   scanf("%s",holder);
   if( isHolder(holder))
   {
     printf("\nAlready Taken Try different");
      delay(800);
     bankCreateAccount();
  }
  else
    strcpy(temp->Info.accountHolderName,holder);
       newLine(2);
   printf("%30.25s","Entre ID Proof :-");
   scanf("%s",temp->Info.panNo);
   newLine(2);
    printf("%30.25s","Entre Mobile No :-");
    scanf("%s",temp->Info.mobileNo);
    newLine(3);
temp->Info.accountBalance=1000;
getdate(&dt);
st->d->date=dt.da_day;
st->d->month=dt.da_mon;
st->d->year=dt.da_year;
    printf("%50.30s","Created Successfully");
   temp->nb=NULL;
    if(start==NULL)
	start=temp;
   else
     current->nb=temp;
   current=temp;
   temp=NULL;

  delay(1200);
}



int bankDashboard()
{
    int a;
    bankDashboardMenu();
      scanf("%d",&a);
   switch(a)
   {
     case 1: bankCreateAccount(); break;
      case 2: bankDeposit(); break;
      case 3: bankWithdra(); break;
      case 4: viewBalance();bankDashboard(); break;
      case 5: logOut();return 1;
      case 6: pendingList();break;
     case 7: logOut();exit(1);
      default : puts("Wrong choice");delay(1000);bankDashboard();
   }
   bankDashboard();
 return 1;
}

void quickTransfer()
{
    qk();
    getch();
}

void userTransferMoney()
{
  int a;
  userDashboardMenu();
  scanf("%d",&a);
  switch(a)
  {
     case 1: quickTransfer();break;
     //case 2: addBenificiary();break;
    default : puts("Wrong choice");delay(1000);userDashboard();
  }

}

int userDashboard()
{
   int a;
  userDashboardMenu();
  scanf("%d",&a);
  switch(a)
  {
        case 1: userTransferMoney(); break;
      case 2: viewBalance(); break;
      case 3: miniStatement(); break;
    //  case 4: userUpdateProfile(); break;
      case 5: logOut();return 1;
      case 6: logOut();exit(1);
      default : puts("Wrong choice");delay(1000);userDashboard();
  }
   userDashboard();
}

void login()
{
  char username[20]={'\0'},password[20]={'\0'},ch;
  int i=0,a;
clrscr();
basemenu();
  printf("\033[1;32m");  //green
  printf("%43.10s","LOGIN\n");
  printf("\033[1;37m");
    printf("\n\n%36.12s","Username :- ");
   scanf("%s",username);
  printf("\n\n%36.12s","Password :- ");
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
    password[i--]='\0';
  }
      }
      else
      {
	password[i++]=ch;
	printf("*");
      }
   }
   printf("\033[0m"); //grey
   temp=start;
  printf("\n\n\n\n%54.27s","Press any key to Login  :)");
  L:
  if(strcmp(temp->userName,username)==0 && strcmp(temp->passWord,password)==0 && temp->status==1)
   {
  printf("%45.30s","Login Successfully");
  delay(800);
 // userDashboard();
   if(userDashboard()==1)
  {
     login();
  }
   }
   else if(strcmp(bankerNet.userName,username)==0 && strcmp(bankerNet.passWord,password)==0)
   {
  printf("%45.30s","Login Successfully");
  delay(800);
   // bankDashboard();
    if(bankDashboard()==1)
   {
      login();
   }
   }
   else
   {

   while(temp!=NULL)
   {
    temp=temp->nb;
    goto L;
   }
     c++;
     printf("\nFailed");
   printf("\n\n%72.10s","4. Exit");
   scanf("%d",&a);
   if(a==4)
    return ;
      delay(1200);
     if(c<=3)
     {
	      login();
      }
    else
      {
	   printf("\n\n\n");
	   printf("%54.30s","You have crossed your limit");
	 delay(2000);
	 c=0;
	 exit();
      }
   }
}


int bankerRegistration()
{
  char username[20];
  basemenu();
    printf("\033[1;36m");
  printf("%49.20s","Banker Registration");
  newLine(3);
   printf("\033[1;37m");
temp=(struct netBanking*)malloc(sizeof(struct netBanking));
  printf("%30.15s","Username :- ");
  scanf("%s",username);
  newLine(2);
  if( isRepeat(username))
  {
    printf("\nAlready Taken Try different");
    delay(800);
    userRegistration();
  }
  else
    strcpy(temp->userName,username);

  printf("%30.15s","Password :- ");
  scanf("%s",temp->passWord);
  newLine(2);
  printf("%30.15s","Mobile No. :- ");
  scanf("%s",temp->Info.mobileNo);
  temp->status=pending;
 autoAccountNo();
     temp->Info.accountBalance=1000;
  newLine(2);
  printf("%40.20s","Thank you");
  newLine(2);
  printf("\033[1;36m");
  printf("%55.30s","Registration Pending....:)");
//  netBank.status=2;
	  temp->nb=NULL;
    if(start==NULL)
  start=temp;
   else
     current->nb=temp;
   current=temp;
   temp=NULL;

  delay(1200);
}

int userRegistration()
{
char username[20]={'\0'};
L:
    basemenu();
  printf("\033[1;36m");
  printf("%49.20s","User Registration");
  newLine(3);
  printf("\033[1;37m");
temp=(struct netBanking*)malloc(sizeof(struct netBanking));
  printf("%30.15s","Username :- ");
  scanf("%s",username);
  newLine(2);
  if(isRepeat(username))
  {
    printf("\nAlready Taken Try different");
    delay(800);
    goto L;
  }
  else
    strcpy(temp->userName,username);

  printf("%30.15s","Password :- ");
  scanf("%s",temp->passWord);
  newLine(2);
  printf("%30.15s","Mobile No. :- ");
  scanf("%s",temp->Info.mobileNo);
  temp->status=pending;
  autoAccountNo();
  temp->Info.accountBalance=1000;
  newLine(2);
  printf("%40.20s","Thank you");
  newLine(2);
  printf("\033[1;36m");
  printf("%55.30s","Registration Pending....:)");
//  netBank.status=2;
  temp->nb=NULL;
    if(start==NULL)
  start=temp;
   else
     current->nb=temp;
   current=temp;
   temp=NULL;

  delay(1200);
}

void registration()
{
  int a;
  basemenu();
  registrationMenu();
  scanf("%d",&a);
  switch(a)
  {
     case 1:userRegistration();break;
     case 2:bankerRegistration();break;
     case 3: login();break;
     case 4: exit();
  }
  registration();
}

void main()
{
  clrscr();
  registration();
//userDashboardMenu();
//  miniStatement();
	getch();
}
/*#include <stdio.h>
#include "NEWBANK/includes/mydef.h"
#include "NEWBANK/lib/comlib.c"
#include "NEWBANK/view/menu.c"
void main(){
  struct netBanking *us1,*us2,*us3,*us4;
clrscr();
printf("\n");
us1=(struct netBanking*)malloc(sizeof(struct netBanking));
us1->bank.accountNumber=101;
us1->status=pending;

us2=(struct netBanking*)malloc(sizeof(struct netBanking));
us2->bank.accountNumber=102;
us2->status=pending;

us3=(struct netBanking*)malloc(sizeof(struct netBanking));
us3->bank.accountNumber=103;
us3->status=pending;

us4=(struct netBanking*)malloc(sizeof(struct netBanking));
us4->bank.accountNumber=104;
us4->status=pending;
us1->nb=us2;
us2->nb=us3;
us3->nb=us4;
us4->nb=NULL;
printPendingData(us1);
if (varifieduserList(us1))
{
  printf("\n Account Activated");
}
else
printf("\nfailed");
if (varifieduserList(us1))
{
  printf("\n Account Activated");
}
else
printf("\nfailed");
if (varifieduserList(us1))
{
  printf("\n Account Activated");
}
else
printf("\nfailed");
printActiveData(us1);

getch();
}*/
