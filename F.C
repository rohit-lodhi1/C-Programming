#include<stdio.h>

struct node{
 int data;
 struct node *next;
}*start=NULL,*current=NULL;

void addAtLast()
{
struct node *temp;
int data;
printf("Entre The value");
scanf("%d",&data);

   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=data;
   temp->next=NULL;
    current->next=temp;
    current=temp;
   temp=NULL;
}

void addAtFirst()
{
     struct node *temp;
     int data;
printf("Entre The value");
scanf("%d",&data);
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=data;
   temp->next=start;
   start=temp;
//   current=temp;
   temp=NULL;

}

int addAtNthPos()
{
  struct node *test,*temp;
  int data,pos,posCount=1;
  puts("Entre The Data\n");
  scanf("%d",&data);
  puts("Entre The Position\n");
  scanf("%d",&pos);
 test=(struct node*)malloc(sizeof(struct node));
 test->data=data;
 temp=start;
  while(++posCount<pos)
  {
     temp=temp->next;
  }
  test->next=temp->next;
  temp->next=test;
  return 1;
}

int deleteAtFirst()
{
 struct node *test,temp;
 test=start;
 start=test->next;
 test->next=NULL;
 return 1;
}

int deleteAtLast()
{
   struct node *temp;
   temp=start;
   while(temp->next->next!=NULL)
   {
      temp=temp->next;
   }
   temp->next=NULL;
}

int deleteAtNthPos()
{
    struct node *test1,*test2;
    int posCount=1,pos;
    puts("Entre The Position\n");
    scanf("%d",&pos);
    test1=start;
    while(++posCount<pos)
    {
      test1=test1->next;
      test2=test1->next;
    }
    test1->next=test2->next;
    test2->next=NULL;
}

void viewData()
{
struct node *temp;
  clrscr();
  temp=start;
  while(temp!=NULL)
  {
     printf("%d-> ",temp->data);
    temp=temp->next;
  }
  printf("NULL");
  getch();
}
void midnode()
{
   struct node *tmp1,*tmp2;
   tmp1=tmp2=start;
   while(tmp2->next!=NULL)
   {
     tmp2=tmp2->next->next;
      tmp1=tmp1->next;
   }
   printf("\n  MID NODE");
   printf("\n ->  %d  <-",tmp1->data);
   getch();
}


void menu()
{
  int a;
  clrscr();
  printf("\n\n MENU\n\n");
  printf("1. ADD AT FIRST\n");
  printf("2. ADD AT LAST\n");
  printf("3. ADD AT POSITION\n");
  printf("4. MIDDLE NODE\n");
  printf("5. VIEW DATA\n");
  printf("6. DELETE AT FIRST\n");
  printf("7. DELETE AT LAST\n");
  printf("8. DELETE AT POSITION\n");
  printf("9. EXIT\n");
  scanf("%d",&a);
   switch(a)
   {
     case 1: addAtFirst();break;
     case 2: addAtLast();break;
     case 3: addAtNthPos();break;
     case 4: midnode();break;
     case 5: viewData();break;
     case 6: deleteAtFirst();break;
     case 7: deleteAtLast();break;
     case 8: deleteAtNthPos();break;
     case 9: exit();break;
   }
   menu();
}


void main()
{
 struct node *temp;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=0;
temp->next=NULL;
start=temp;
current=temp;
 clrscr();
//addAtFirst(100);
//addAtLast(10);
//addAtFirst(200);
//addAtLast(30);
//addAtLast(80);
menu();
//viewData();
//deleteAtFirst();
//viewData();
// midnode();
 getch();
}