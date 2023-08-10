#include<stdio.h>
#define pending 2
#define active 1
#define block 0
int random=1000,c=1;
struct account{
//   char name[20];
//   char father[20];
//   int  dob[20];
//   char address[20];
   long int  accountNo;
   char accountHolderName[30];
   char mobileNo[12];
   char panNo[16];
   int  accountBalance;
};
struct netBanking{
    char userName[20];
    char passWord[20];
    char mPin[4];
    struct account Info;
    int status;
    struct netBanking *nb;
}netBank,*start=NULL,*temp=NULL,*current=NULL;
struct bankerNetBanking{
  char userName[20];
  char passWord[20];
}bankerNet={"Dollop","Dollop123"};

void createMemory()
{
   temp=(struct netBanking*)malloc(sizeof(struct netBanking*));
}
void setData(char username[],char password[],char mobileno[])
{
   temp->userName=username;
   temp->passWord=password;
   temp->Info.mobileNo=mobileno;
   temp->nb=NULL;

}
int linkList(char username[],char password[],char mobileno[])
{
//  int data;
   createMemory();
   setData( username,password,mobileno);

   if(start==NULL)
	start=temp;
   else
     current->nb=temp;
   current=temp;
   temp=NULL;

     return 1;
}
void lineDesigne(int n)
{
  int i;
  printf("\033[1;33m");     //yellow
   for(i=0;i<=79;i++)
  {
    printf("-");
  }
}
void newLine(int n)
{
   int i;
   for(i=1;i<=n;i++)
   {
     printf("\n");
   }
}
void menu()
{
 clrscr();
  printf("\033[1;31m");
  printf("%44.10s%41.5s%45.10s","Welcome\n","To\n","LENA BANK\n");
  lineDesigne(0);
  puts("\n");
}
void logOut()
{
  clrscr();
  printf("\n\n\n\n\n\n\n\n\n\n");
  printf("\033[1;36m");
  printf("%43.20s","Loging Out....");
  printf("\033[0m");
  delay(1500);
}
void bankWithdrawal()
{
   clrscr();
   printf("\n\n\n");
   printf("\033[1;36m");
   printf("%47.20s","Withdrawal\n");
   lineDesigne(0);
   printf("\n\n");
   printf("\033[1;37m");
   printf("%35.30s","Entre Your Full Name :-\n");
   //store
   printf("\n");
   printf("%35.30s","Entre Your Account No :-\n");
   //store
   printf("\n");
   printf("%35.30s","Entre Your Password :-\n");
   //store
   getch();
}
void bankDeposit()
{
   clrscr();
   printf("\n\n");
     printf("\033[1;36m");     //blue
   printf("%45.20s","Deposit\n");
   lineDesigne(0);
   printf("\n\n");
   printf("\033[1;37m");
   printf("%32.20s","Entre Your Name :-\n");
   printf("\n");
   printf("%32.30s","Entre Your Account No :-\n");
   printf("\n");
   printf("%32.20s","Entre Amount :-\n");
}
void bankCreateAccount()
{
  clrscr();
  printf("\n\n");
 printf("\033[1;36m");            //blue
   printf("%47.20s","Create Account\n");
   lineDesigne(0);
   printf("\n\n");
     printf("\033[1;37m");
   printf("%30.20s","Entre Full Name :-");
//   printf("%30.20s","Date of Birth :-");
 //  printf("\n\n");
 //  printf("%30.20s","Entre Father Name :-");
//   printf("%30.20s","Entre ID Proof :-");
//   printf("\n\n");
//   printf("%30.20s","Entre Mother Name :-");
//   printf("\n\n");
//   printf("%30.20s","Entre Mobile No :-");
//   scanf("%s",netBank.Info.name);
   printf("\n\n");
   printf("%30.20s","Entre Address :-");
//   fflush(stdin);
 //   gets(netBank.Info.address);
 //  netBank.Info.accountNo=random+1;
 //  netBank.Info.accountBalance=random;
   printf("\n\n");
   printf("%60.10s","Back");
  bankDashboard();
}
void userUpdateProfile()
{
  clrscr();
  printf("\n\n");
 printf("\033[1;36m");     //blue
  printf("%49.15s","Update Profile\n");
  lineDesigne(0);
  printf("\033[1;37m");  //white
  newLine(5);
  printf("%34.20s","1. Change Username");
//  newLine(3);
    printf("%30.20s","2. Change Password");
    newLine(3);
    printf("%35.20s","3. Change Mobile No");
    printf("\n\n\n");
    printf("%60.10s","4. Back");
}
void userMiniStatement()
{
   clrscr();
   printf("\n\n\n");
   printf("\033[1;36m");  // blue
   printf("%47.25s","Mini Statement");
   printf("\n\n");
      lineDesigne(0);
   printf("\033[1;37m");
   printf("%8.5s","Date");
   printf("%12.5s","Time");
   printf("%30.15s","Transactions\n");
      lineDesigne(0);
      getch();
}
void viewBalance()
{
  int account;
    clrscr();
  printf("\n\n\n\n");
    printf("\033[1;36m");   // blue
  printf("%47.20s","View Balance\n");
      lineDesigne(0);
  printf("\n\n\n\n\n\n");
  printf("\033[1;37m");      // white
  printf("%41.31s","Please Entre Your Account No :-");
  scanf("%d",&account);
  if(netBank.Info.accountNo==account)
  {
  printf("\n\n\n\n");
  printf("\033[1;36m");
  printf("%47.32s","Your current balance is :-");
  printf("%d",netBank.Info.accountBalance);
  getch();
  }
  else
  {
      c++;
      printf("Wrong account NO");
    if(c<=2)
    {
       delay(800);
       viewBalance();
    }
  }
  //print the data
  getch();
  userDashboard();
}
void userTransferMenu()
{
      clrscr();
   printf("\033[1;36m");
   printf("\n\n\n");
   printf("%49.20s","Transfer Money\n");
     lineDesigne(0);
   printf("\n\n\n\n");
   printf("\033[1;37m");
   printf("%35.20s","1. Quick Transfer");
   printf("%32.20s","2. Add Beneficiery");
}
void pendingList()
{
int a,ch;
  clrscr();
  printf("\n\n");
  printf("\033[1;36m");
  printf("%53.25s","Registration Pending List");
  printf("\n\n\n");
      lineDesigne(0);
  printf("%6.5s","Press");
  printf("%35.20s","Name");
  printf("%35.20s","Status");
  printf("\n\n");
    printf("\033[1;37m");
  printf("   1.");
  printf("%25.20s",netBank.userName);
  printf("%44d",netBank.status);
  scanf("%d",&a);
  switch(a)
  {
     case 1:{

	  scanf("%d",&ch);
	  netBank.status=ch;
	  printf("%d",netBank.status);
	  pendingList();
	  }
     }
bankDashboard();
}
int  bankDashboardMenu()
{
     int a;
   printf("\033[1;36m");
   printf("%49.22s","OUR SERVICES\n");
   lineDesigne(13);
   printf("\033[1;37m");   //white
   printf("\n\n");
   printf("%35.30s","1. Create Account");
   printf("%27.20s","2. Deposit\n\n");
   printf("%31.30s","3. Withdrawal");
   printf("%36.20s","4. View Balance\n\n");
   printf("%27.30s","5. Logout");
   printf("%53.30s","6. Registration Pending List\n\n");
   printf("%28.20s","7. EXIT\n\n\n");
   printf("\033[0m");    //grey
   printf("%50.20s","Press to continue");
    scanf("%d",&a);
   switch(a)
   {
      case 1: bankCreateAccount(); break;
      case 2: bankDeposit(); break;
      case 3: bankWithdrawal(); break;
      case 4: viewBalance();bankDashboard(); break;
      case 5: logOut();return 1;
      case 6: pendingList();break;
      case 7: logOut();exit(1);
      default : puts("Wrong choice");delay(1000);bankDashboard();
   }
}
int bankDashboard()
{
     clrscr();
   printf("\033[1;304m");
   printf("%48.19s%47.15s","Welcome :)\n\n","Banker\n\n\n");
  return bankDashboardMenu();
}
int userDashboardMenu()
{
   int a;
   printf("\033[1;36m");
   printf("%49.22s","OUR SERVICES\n");
   lineDesigne(13);
   printf("\033[1;37m");   //white
   printf("\n\n");
   printf("%35.30s","1. Transfer Money");
   printf("%31.20s","2. View Balance\n\n");
   printf("%35.30s","3. Mini Statement");
   printf("%33.20s","4. Update Profile\n\n");
   printf("%27.30s","5. Logout");
   printf("%32.20s","6. EXIT\n\n\n");
   printf("\033[0m");    //grey
   printf("%50.20s","Press to continue");
       scanf("%d",&a);
   switch(a)
   {
      case 1: userTransferMenu(); break;
      case 2: viewBalance(); break;
      case 3: userMiniStatement(); break;
      case 4: userUpdateProfile(); break;
      case 5: logOut();return 1;
      case 6: logOut();exit(1);
      default : puts("Wrong choice");delay(1000);userDashboard();
   }
}
int userDashboard()
{
  clrscr();
   printf("\033[1;37m");
   printf("%48.19s%46.15s","Welcome :)\n\n","User\n\n\n");
  return  userDashboardMenu();
}
int homeDesign()
{
  char username[20]={'\0'},password[20]={'\0'},ch;
  int i=0,a;
clrscr();
menu();
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
  printf("\n\n\n\n%54.27s","Press any key to Login  :)");
  if(strcmp(netBank.userName,username)==0 && strcmp(netBank.passWord,password)==0 && (netBank.status==1))
   {
	printf("%45.30s","Login Successfully");
	delay(800);
	 if(userDashboard()==1)
	{
	   homeDesign();
	}
   }
   else if(strcmp(bankerNet.userName,username)==0 && strcmp(bankerNet.passWord,password)==0)
   {
	printf("%45.30s","Login Successfully");
	delay(800);
   //	bankDashboard();
	 if(bankDashboard()==1)
	{
	   homeDesign();
	}
   }
   else
   {
     c++;
     printf("\nFailed");
   printf("\n\n%72.10s","4. Exit");
   scanf("%d",&a);
   if(a==4)
    return ;
      delay(1200);
     if(c<=3)
     {
	 homeDesign();
      }
      else
      {
	printf("\n\n\n");
	printf("%54.30s","You have crossed your limit");
	delay(2000);
	exit();
      }
   }
}
void bankRegistration()
{
menu();
    printf("\033[1;36m");
  printf("%49.20s","Banker Registration");
  printf("\n\n\n");
   printf("\033[1;37m");
  printf("%30.15s","Username :- ");
  //store
  printf("\n\n");
  printf("%30.15s","Password :- ");
  printf("\n\n");
  printf("%30.15s","Mobile No. :- ");
  printf("\n\n");
  printf("%30.15s","Employee ID :- ");
 getch();
}
void userRegistration()
{
char username[20],password[20],mobileno[12];
menu();
  printf("\033[1;36m");
  printf("%49.20s","User Registration");
  printf("\n\n\n");
  printf("\033[1;37m");

  printf("%30.15s","Username :- ");
  scanf("%s",&username);

  printf("\n\n");
  printf("%30.15s","Password :- ");
  scanf("%s",&netBank.passWord);
  printf("\n\n");
  printf("%30.15s","Mobile No. :- ");
  scanf("%s",&netBank.Info.mobileNo);
    linklist(username,password,mobileno);
  printf("\n\n");
  printf("%40.20s","Thank you");
  printf("\n\n");
  printf("\033[1;36m");
  printf("%55.30s","Registration Pending....:)");
  netBank.status=2;
  delay(1200);
}
void registration()
{
  int a;
  menu();
  printf("%46.20s","Registration");
  printf("\n\n\n\n");
  printf("\033[1;37m");
  printf("%29.20s %29.20s","1. User","2. Banker");
  printf("\n\n\n\n\n");
  printf("%54.30s","Already have an account..");
  printf("\n\n");
  printf("\033[1;36m");
  printf("%50.20s","Press 3. for Login");
  printf("\n\n%72.10s","4. Exit");
  scanf("%d",&a);
  switch(a)
  {
      case 1: userRegistration();break;
      case 2: bankRegistration();break;
      case 3: homeDesign(); break;
      case 4: exit(1);break;
      default : puts("Wrong choice");delay(1000);registration();;
  }
  registration();
}
void main()
{
clrscr();
registration();
//userRegistration();
//getch();
//bankRegistration();
//getch();
//printf("%s",netBank.userName);
//getch();
//homeDesign();
//getch();
//logOut();
//getch();
// printf("%s",netBank.Info.name);
// getch();
//userDashboard();
//getch();
//userDashboardMenu();
//getch();
//bankDashboard();
//getch();
//pendingList();
//getch();
//bankDashboardMenu();
//getch();
//userTransferMenu();
//getch();
//viewBalance();
//getch();
//userMiniStatement();
//getch();
//userUpdateProfile();
//getch();
//bankCreateAccount();
//getch();
//bankDeposit();
//getch();
//bankWithdrawal();
//getch();
//printf("%d",netBank.Info.accountNo);
//getch();
}