/* 
     credits
*/

/* Macros for  return or using purpose*/
#define true 1
#define false 0
#define block 0
#define active 1
#define pending 2

/* function prototype*/

void basemenu();
void newLine(int n);
void lineDesigne();
void registration();

/* Structures*/


struct account{
   int  accountNo;
   char accountHolderName[30];
   char mobileNo[12];
   char panNo[16];
   int  accountBalance;
};

struct date {
    int date;
    int month;
    int year;
};

struct mini{

    int drAmt;
    int crAmt;
    struct date *d;
    struct mini *next;
}*st=NULL;
struct netBanking{
    char userName[20];
    char passWord[20];
    char mPin[4];
    struct account Info;
    struct netBanking *nb;
    struct mini *state;
    int status;
}*start=NULL,*temp=NULL,*current=NULL;
struct bankerNetBanking{
  char userName[20];
  char passWord[20];
}bankerNet={"Dollop","Dollop123"};


//Account no;
int random=100;
//for count
int c=1;



