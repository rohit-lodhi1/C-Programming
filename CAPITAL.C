#include<stdio.h>
struct node{
 int data;
 struct node *selfreff;
}*start=NULL,*temp=NULL,*current=NULL;

void createMemory()
{
  temp=(struct node*)malloc(sizeof(struct node));
}

void setData(int data)
{
  temp->data=data;
  temp->selfreff=NULL;
}

int linkList()
{
  int data;
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
  printf("NULL");
  return 1;
}
void viewData()
{
  temp=start;
  while(temp!=NULL)
  {
    printf("%d",temp->data);
    temp=temp->selfreff;
  }
}
void main()
{
   linkList();
   viewData
   getch();
}











