#include<stdio.h >
struct node{
  int data;
  struct node *next;
}*list1,*list2,*start1=NULL,*current1=NULL,*start2=NULL,*current2=NULL;

int addAtLast(struct node *start,struct node *current,int data)
{
   struct node *temp;
//   int data;
  // puts("Entre the data");
//   scanf("%d",&data);
   temp=(struct node*)malloc(sizeof(struct node));
     temp->data=data;
     temp->next=NULL;
   if(start==NULL)
      start=temp;
   else
      current->next=temp;
   current=temp;
   temp=NULL;
	return 1;
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
addAtLast(&list1,&current1,10);
addAtLast(&list1,&current1,20);
addAtLast(&list1,&current1,30);
viewData(&list1);
getch();

}