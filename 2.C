#include<stdio.h>
struct node{
  int data;
  struct node *prev;
  struct node *next;
}*start=NULL,*current=NULL;

struct node *createNode(int data)
{

   struct node *temp=(struct node*)malloc(sizeof(struct node));
     temp->data=data;
     temp->prev=NULL;
     temp->next=NULL;
     return temp;
}

int addAtLast(int data)
{
  struct node *temp=createNode(data);
   if(start==NULL)
      start=temp;
   else
   {
      current->next=temp;
      temp->prev=current;
   }
   current=temp;
   temp=NULL;
}

int sort(int data)
{
  struct node *temp=createNode(data);
   struct node *temp1=start;
   if(temp1->data==temp->data)
   {
      temp->next=temp1;
      temp->prev=temp1->prev;
      temp1->prev=temp;
      start=temp;
	 return 1;
   }
   while(temp1->data<temp->data && temp1->next->next!=NULL && temp1->next->data<temp->data && temp1)
      temp1=temp1->next;

   if(temp1->next==NULL)
   {
      temp->prev=temp1;
      temp1->next=temp;
      temp1=temp;
      return 1;
   }
   temp->next=temp1->next;
   temp->prev=temp1;
   temp1->next->prev=temp;
   temp1->next=temp;

}

int addAtFirst(int data)
{
   struct node *temp=createNode(data);
   if(start==NULL)
     start=temp;
   else
   {
      temp->next=start;
      start->prev=temp;
      }
      start=temp;
      temp=NULL;
}

int addAtNthPos(struct node*start1,int data,int pos)
{
   struct node *temp=createNode(data),*temp1=start1;
   int posCount=1;
   if(start1==NULL|| pos<2)
   {
     addAtFirst(data);
       return 1;
   }
   else
     while(++posCount<pos)
	 temp1=temp1->next;

     temp->next=temp1->next;
     temp->next->prev=temp;
     temp->prev=temp1;
     temp1->next=temp;

}

int deleteAtFirst()
{
   struct node*temp=start;
   start=temp->next;
   start->prev=NULL;
   temp->next=NULL;
   free(temp);
}

int deleteAtLast()
{
  struct node *temp=start;
  if(temp->next==NULL)
  {
     temp->prev=NULL;
     start=NULL;
  }
  while(temp->next!=NULL)
    temp=temp->next;

  temp->prev->next=NULL;
  temp->prev=NULL;
  free(temp);
}

int deleteAtNthPos(struct node *start1,int pos)
{
  struct node*temp=start;
  int posCount=1;
  if( temp->next==NULL|| pos<2)
  {
    deleteAtFirst();
  }
  else
  {
  while(temp->next!=NULL  && posCount++<pos)
  {
       temp=temp->next;
  }
  temp->prev->next=temp->next;
  temp->next->prev=temp->prev;
  temp->prev=NULL;
  temp->next=NULL;
  free(temp);
  }
}

struct node* reverse(struct node *temp)
{
   struct node *pre=NULL,*curr=temp,*nxt=NULL;
   while(curr!=NULL)
   {
      nxt=curr->next;
      curr->next=pre;
      curr->prev=nxt;
      pre=curr;
      curr=nxt;
   }
   return pre;
}

struct node* revByRec(struct node *temp)
{
  struct node *revhead;
  if(temp==NULL || temp->next==NULL)
    return revhead;
    else
    revhead=revByRec(temp->next);
    temp->next=temp->prev->next;
}

struct node* revByRecur(struct node *temp,int k)
{
  struct node *pre=NULL,*curr=temp,*nxt=NULL;
  int count=1;
  if(curr==NULL)
  return pre;
  while(curr!=NULL && count<=k)
  {
    nxt=curr->next;
    curr->next=pre;
    pre=curr;
    curr=nxt;
    count++;
  }
  if(curr!=NULL)
  {
   temp->next =revByRecur(curr,k);
 }
  current=start;
  return pre;
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
addAtLast(1);
addAtLast(3);
addAtLast(4);
addAtLast(10);
//addAtLast(9);
sort(5);
//addAtNthPos(start,100,1);
//deleteAtFirst();
//deleteAtFirst();
//deleteAtLast();  */
//deleteAtLast();
//deleteAtNthPos(start,2);
//start=reverse(start);
//printf("%d\n",start->next->next->next->prev->data);
viewData(start);
getch();
}
/*
void rev(char *s)
{
 char t;
   int st=0,lt=strlen(s)-1;
   while(st<lt)
   {
       t=s[st];
       s[st]=s[lt];
       s[lt]=t;
       st++;
       lt--;
   }
}
void main()
{
    char s[30];
    clrscr();
    printf("Entre characters\n");
    scanf("%s",s);
    rev(s);
    printf("%s",s);
    getch();

}
*/
 /*
void swap(char s[],int ind,int n)
{
   char t;
   int end=ind+n-1;
   if(s[end]!=0)
   {
     while(ind<end)
     {
	t=s[ind];
	s[ind]=s[end];
	s[end]=t;
	ind++;
	end--;
      }
    }
}
void indexNo(char s[])
{
   int i,n;
   printf("Entre the range");
   scanf("%d",&n);
   for(i=0;s[i]!=0;i++)
   {
       if(i==0 || i%n==0)
       {
	  swap(s,i,n);
       }


   }
}

void main()
{
   char s[100];
   clrscr();
   printf("Entre the number");
   scanf("%s",&s);
   indexNo(s);
   printf("%s",s);
   getch();
}*/