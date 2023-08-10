


  #include<stdio.h>

struct node{
  int data;
  struct node *next;
}*list1=NULL,*list2=NULL;

struct node* createMemory(int data)
{
   struct node *temp=(struct node*)malloc(sizeof(struct node));
     temp->data=data;
     temp->next=NULL;
     return temp;
}

int addAtFirst(struct node **start,int data)
{
   struct node *temp=createMemory(data);
    temp->next=*start;
    *start=temp;
}


int addAtLast(struct node **start,int data){
  struct node *temp=createMemory(data),*current=*start;

  if(*start==NULL)
      *start=temp;
  else
    {
	while(current->next!=NULL)
	  current=current->next;
	  current->next=temp;
	  current=temp;
    }
}

struct node* reverse(struct node* temp)
{
  struct node *pre=NULL,*curr=temp,*nxt=NULL;
  while(curr!=NULL)
  {
     nxt=curr->next;
     curr->next=pre;
     pre=curr;
     curr=nxt;
  }
 return pre;
}

struct node * addTwo(struct node *l1,struct node *l2)
{
  struct node *temp1 = l1,*temp2 = l2;
  struct node *list3 = NULL;
       int carry=0,value=0;
   while(temp1 != NULL || temp2 != NULL)
   {
      value = temp1->data;
      value+=temp2->data+carry;
     if(value>9)
       {
	  carry=value/10;
	  value=value%10;
      addAtLast(&list3,value);
       }
       else
       {
	  addAtLast(&list3,value);
	  carry=0;
      }
   temp1=temp1 ->next;
   temp2=temp2->next;
   }
   return list3;
}



/*
void rev(struct node *temp)
{
  struct node* pre=NULL,*curr=temp,*nxt=NULL;
  while(curr!=NULL)
  {
    nxt=curr->next;
    curr->next=pre;
    pre=curr;
    curr=nxt;
  }
  current=temp;
  start=pre;
}
  */
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
struct node *start1=NULL,*start2=NULL;
clrscr();
addAtLast(&start1,1);
addAtLast(&start1,2);
addAtLast(&start1,3);
addAtLast(&start1,9);
list1=start1;
list1=reverse(list1);
addAtLast(&start2,1);
addAtLast(&start2,2);

addAtLast(&start2,3);
addAtLast(&start2,2);
list2=start2;
list2=reverse(list2);
list1=addTwo(list1,list2);
list1=reverse(list1);
viewData(list1);
getch();
}



/*

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

int add(int data)
{
      struct node  *temp=(struct node*)malloc(sizeof(struct node));
      temp->data=data;
      temp->next=NULL;
      if(start3==NULL)
	 start3=temp;
       else
      current3->next=temp;
   current3=temp;
   temp=NULL;

}


int addition(struct node *temp,struct node *temp1)
{
  int value,n,i=1,carry=0;
   while(temp!=NULL || temp1!=NULL)
  {
  value=temp->data;
  value+=temp1->data;
    if(value>9)
    {
      carry=value%10;
      add(carry);
       value=value/10;
       n=value;
    }
     add(value);
     temp=temp->next;
     temp1=temp1->next;
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
//currentnext=
addAtLast(1,1);
addAtLast(2,1);
addAtLast(3,1);
//addAtLast(40,1);
addAtLast(4,0);
addAtLast(5,0);
addAtLast(9,0);
//addAtLast(70,0);
list1=start1;
viewData(list1);
list1=revByRecur(list1,current1);
puts("");
//viewData(list1);
list2=start2;
viewData(list2);
list2=revByRecur(list2,current2);
puts("");
//viewData(list2);
printf("\n");
addition(list1,list2);
list3=start3;
list3=revByRecur(list3,current3);
viewData(list3);
getch();

}*/