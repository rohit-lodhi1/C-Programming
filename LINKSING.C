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
   else
   {   if(start2==NULL)
	 start2=temp;
       else
      current2->next=temp;
   current2=temp;
   temp=NULL;
    }
}

int check(struct node *temp)
{
 struct node *temp1;
   while(temp!=NULL)
   {
     if(temp->data==temp->next->data)
     {
	 temp1=temp->next;
	 temp->next=temp1->next;
	 free(temp1);
     }
     else
     temp=temp->next;
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
addAtLast(1,1);
addAtLast(2,1);
addAtLast(2,1);
addAtLast(2,1);
addAtLast(3,1);
addAtLast(3,1);
addAtLast(9,1);
addAtLast(9,1);
//addAtLast(70,0);
check(start1);
list1=start1;
viewData(list1);
//list1=revByRecur(list1,current1);
//puts("");
//viewData(list1);
//list2=start2;
//viewData(list2);
//list2=revByRecur(list2,current2);
puts("");
//viewData(list2);
printf("\n");
//addition(list1,list2);
//list3=start3;
//list3=revByRecur(list3,current3);
//viewData(list3);
getch();

}