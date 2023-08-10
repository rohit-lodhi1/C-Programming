#include<stdio.h>

struct node{
   int data;
   struct node *next;
}*start=NULL,*current=NULL;

int addAtFirst()
{
   struct node *temp;
   int data;
   puts("Entre the data");
   scanf("%d",&data);
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=data;
   temp->next=start;
   if(start==NULL)
      current=temp;
   start=temp;
   temp=NULL;
	return 1;
}

int addAtLast()
{
   struct node *temp;
   int data;
   puts("Entre the data");
   scanf("%d",&data);
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

int addAtNthPos()
{
   struct node *temp,*test;
   int data,pos,posCount=1;
   puts("Entre the data");
   scanf("%d",&data);
   puts("Entre the position");
   scanf("%d",&pos);
   test=(struct node*)malloc(sizeof(struct node));
   test->data=data;
   temp=start;
   if(pos<2)
   {
      temp->next=start;
      start=temp;
	return 1;
   }
   while(++posCount<pos)
      temp=temp->next;

   test->next=temp->next;
   temp->next=test;
	return 1;
}

int deleteAtFirst()
{
   struct node *temp;
   temp=start;
   start=temp->next;
   temp->next=NULL;
	return 1;
}

int deleteAtLast()
{
   struct node *temp;
   temp=start;
   while(temp->next->next!=NULL)
      temp=temp->next;

   current=temp;
   temp->next=NULL;
     return 1;
}

int deleteAtNthPos()
{
   struct node *test1,*test2;
   int pos,posCount=1;
   puts("Entre the position");
   scanf("%d",&pos);
   test1=start;
   if(pos<2)
   {
     start=test1->next;
     test1->next=NULL;
   }
   while(++posCount<pos)
      test1=test1->next;

   test2=test1->next;
   test1->next=test2->next;
   test2->next=NULL;
   free(test2);
   return 1;
}

int revNode()
{
    struct node *pre=NULL,*curr,*nxt=NULL;
    current=start;
    curr=start;
    while(curr!=NULL)
    {
      nxt=curr->next;
      curr->next=pre;
      pre=curr;
      curr=nxt;
    }
    start=pre;
    return 1;
}

int rec(struct node *p,struct node *c,struct node *nxt)
{
   nxt=c->next;
   c->next=p;
   p=c;
   c=nxt;
   if(c!=NULL)
     rec(p,c,nxt);
   else
   {
	current=start;
	start=p;
	return 1;
   }
}

struct node* revByRecur(struct node *temp)
{
   struct node *revHead;
   if(temp==NULL||temp->next==NULL)
   {
      current=start;
      return temp;
   }
   revHead=revByRecur(temp->next);
   temp->next->next=temp;
   temp->next=NULL;
   return revHead;
}

int middleNode()
{
    struct node *test1,*test2;
    test1=test2=start;
    while(test2->next!=NULL)
    {
      test2=test2->next->next;
      test1=test1->next;
    }
    puts(" MIDDLE NODE\n");
    printf("->  %d  <-",test1->data);
    getch();
    return 1;
}

void viewData()
{
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
	printf("%d  %u ||",temp->data,temp);
	temp=temp->next;
    }
    puts("NULL");
}

void menu()
{
   struct node *p=NULL,*c=start,*n=NULL;
   int a;
   clrscr();
   puts("         MENU\n\n");
   puts(" 1. ADD AT FIRST");
   puts(" 2. ADD AT LAST");
   puts(" 3. ADD AT NTH POSITION");
   puts(" 4. VIEW DATA");
   puts(" 5. DELETE AT FIRST");
   puts(" 6. DELETE AT LAST");
   puts(" 7. DELETE AT NTH POSITION");
   puts(" 8. MIDDLE NODE");
   puts(" 9. REVERSE NODE");
   puts("10. REVERSE THROUGH RECURSION");
   puts("11. REVERSE THROUGH RECURSION  2.0");
   puts("12. EXIT");
   scanf("%d",&a);
   switch(a)
   {
     case 1: addAtFirst();break;
     case 2: addAtLast();break;
     case 3: addAtNthPos();break;
     case 4: viewData();getch();break;
     case 5: deleteAtFirst();break;
     case 6: deleteAtLast();break;
     case 7: deleteAtNthPos();break;
     case 8: middleNode();break;
     case 9: revNode();break;
     case 10: rec(p,c,n);break;
     case 11:start=revByRecur(start); break;
     case 12: exit(); break;
    }
    menu();
}

void main()
{
   clrscr();
   menu();
}