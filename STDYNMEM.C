#include<stdio.h>
struct node
{
   int data;
   struct node *selfreff;
}*start=NULL,*temp=NULL,*current=NULL;

void createMemory()
{
   temp=(struct node*)malloc(sizeof(struct node));
}
void setData(int data)
{
   temp->data = data;
   temp->selfreff = NULL;
}
int linkList()
{
int data;
printf("Entre the data :-");
   while(1)
   {
     scanf("%d",&data);
     if(data==0)
     break;
   createMemory();
   setData(data);
   if(start==NULL)
	start=temp;
   else
     current->selfreff=temp;
   current=temp;
   temp=NULL;
 }
     return 1;
}
void viewData()
{
clrscr();
   temp=start;
   printf("\n");
   while(temp!=NULL)
   {
     printf("%d  ,",temp->data);
     temp=temp->selfreff;
   }
   printf("NULL");
   getch();
}

void menu()
{
   int a,i;
   clrscr();
   printf("\n");
   printf("  MENU");
   printf("\n\n");
   printf("1. View Data\n");
   printf("2. Add Data\n");
   printf("3. Exit\n");
   scanf("%d",&a);
   switch(a)
   {
      case 1:viewData();break;
      case 2: linkList();break;
      case 3: exit(1);
      default:puts("Wrong choice");
   }
   menu();
}

void main()
{
   int i;
   char n;
   clrscr();
   menu();
//   viewData();
   getch();
}