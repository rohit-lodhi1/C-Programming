void lineDesigne(int n)
{
  int i;
  printf("\033[1;33m");     //yellow
 // if(n!=0)
  //{
    //  printf("%34.22s");
   //  }
  for(i=0;i<=79;i++)
  {
    printf("_");
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
   printf("%30.20s","Date of Birth :-");
   printf("\n\n");
   printf("%30.20s","Entre Father Name :-");
   printf("%30.20s","Entre ID Proof :-");
   printf("\n\n");
   printf("%30.20s","Entre Mother Name :-");
   printf("\n\n");
   printf("%30.20s","Entre Mobile No :-");
   printf("\n\n");
   printf("%30.20s","Entre Address :-");
   printf("\n\n\n");
   printf("%60.10s","Back");

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

}

void viewBalance()
{
  clrscr();
  printf("\n\n\n\n");
    printf("\033[1;36m");   // blue
  printf("%47.20s","View Balance\n");
  lineDesigne(0);
  printf("\n\n\n\n\n\n");
     printf("\033[1;37m");      // white
  printf("%41.31s","Please Entre Your Account No :-");
  //Store the data
  printf("\n\n\n\n");
     printf("\033[1;36m");
  printf("%47.32s","Your current balance is :-");
  //print the data

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

void bankDashboardMenu()
{

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
   printf("%33.20s","6. EXIT\n\n\n");
   printf("\033[0m");    //grey
   printf("%50.20s","Press to continue");
}

void bankDashboard()
{
     clrscr();
   printf("\033[1;304m");
   printf("%48.19s%47.15s","Welcome :)\n\n","Banker\n\n\n");


}

void userDashboardMenu()
{
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
}

void userDashboard()
{
  clrscr();
   printf("\033[1;37m");
   printf("%48.19s%46.15s","Welcome :)\n\n","User\n\n\n");
//   userDashboardMenu();
}

void homeDesign()
{
//char ch[12];
clrscr();

  printf("\033[1;31m");
  printf("%44.10s%41.5s%45.10s","Welcome\n","To\n","LENA BANK\n");
  lineDesigne(0);
  puts("\n");
  printf("\033[1;32m");  //green
  printf("%43.10s","LOGIN\n");
  printf("\033[1;37m");
  printf("\n\n%36.11s","Username :-");
//  scanf("%s",ch);
  printf("\n\n%36.11s","Password :-");
  //Store the Data
    printf("\033[0m"); //grey
  printf("\n\n\n\n%54.27s","Press any key to Login  :)");

}

void main()
{
clrscr();
homeDesign();
getch();
userDashboard();
getch();
userDashboardMenu();
getch();
bankDashboard();
getch();
bankDashboardMenu();
getch();
userTransferMenu();
getch();
viewBalance();
getch();
userMiniStatement();
getch();
userUpdateProfile();
getch();
bankCreateAccount();
getch();
bankDeposit();
getch();
bankWithdrawal();
getch();

}