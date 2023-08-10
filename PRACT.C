
#include<stdio.h>

struct node{
  int data;
  struct node *next;
}*list1 = NULL,*list2 = NULL;

struct node* createMemory(int data)
{
   struct node *temp = (struct node*)malloc(sizeof(struct node));
     temp->data = data;
     temp->next = NULL;
     return temp;
}

int addAtFirst(struct node **start,int data)
{
   struct node *temp = createMemory(data);
    temp->next = *start;
    *start = temp;
}


int addAtLast(struct node **start,int data){
  struct node *temp = createMemory(data),*current=*start;

  if(*start == NULL)
      *start = temp;
  else
    {
	while(current->next != NULL)
	  current = current->next;
	  current->next = temp;
    }
}

struct node* reverse(struct node* temp)
{
  struct node *pre = NULL,*curr = temp,*nxt = NULL;
  while(curr!=NULL)
  {
     nxt = curr->next;
     curr->next = pre;
     pre = curr;
     curr = nxt;
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
      value += temp2->data+carry;
     if(value>9)
       {
	  carry = value/10;
	  value = value%10;
      addAtLast(&list3,value);
       }
       else
       {
	  addAtLast(&list3,value);
	  carry=0;
      }
   temp1 = temp1 ->next;
   temp2 = temp2->next;
   }
   return list3;
}

void sort(struct node *l)
{
   struct node *temp = l,*temp1 = l->next;
   while(temp != NULL)
   {
      temp1 = temp;
       while(temp1 != NULL)
       {
	  if(temp->data>temp1->data)
	  {
	    int t = temp1->data;
	    temp1->data = temp->data;
	    temp->data = t;
	  }
	  temp1 = temp1->next;
       }
       temp = temp->next;
   }
}



void viewData(struct node *temp)
{
    while(temp != NULL)
    {
      printf("%d ->",temp->data);
      temp = temp->next;
    }
    puts("NULL");
}
void main()
{
struct node *start1 = NULL,*start2 = NULL;
clrscr();
addAtLast(&start1,1);
addAtLast(&start1,8);
addAtLast(&start1,11);
addAtLast(&start1,9);
list1 = start1;
sort(list1);
viewData(list1);
getch();
}






/*

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
  */

/*

void main()
{
  int key[]={10,20,3};
  int us[]={3,5,7};
  int i,j,sum=0,mx=0,bug;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      sum= key[i]+us[j];
      if(mx<sum && bug>=sum)
      mx=sum;
    }
  }

  printf("%d",mx);
  getch();
}




/*void main()
{
 char time[]="01:00:00PM",con[10];
 int take[10],i=0;
 clrscr();
 for(i=0;i<strlen(time);i++)
  take[i]=time[i];

 for(i=0;i<strlen(time);i++)
    con[i]=take[i];

printf("%s",con);
   getch();

}
*/

/*
#include<stdio.h>
void main()
{
 char time[]="01:49:11PM";
 int  take[10];
 char con[10];
 int i=0,p=0,value,value1,j=0;
clrscr();
 if(time[strlen(time)-2]=='P')
  p=1;
// printf("%d",p);
if(p==1)
{
 for(i=0;i<strlen(time)-3;i=i+3)
 {

     value=time[i];
     value=(value-48);
     value*=10;
     value1=time[i+1];
     value1=(value1-48);
     value+=value1;
     if(i<2)
     {
      if(p==1&&value==12)
      {
       take[j++]=value;
       take[j++]=value;
       }
      else
	 take[j++]=value+12;
     }
     else
     {
	  take[j++]=value;
	  take[j++]=value1;
	  }
  // take[j++]=':';
 }
 }
 else
 {
  strcpy(con,time);
 }
// i=0;
j=0;
 for(i=0;i<5;i++)
 {
 int r,n;
 if(take[i]==0)
 {
  con[j++]='0';
  con[j++]='0';
 }
 else{
   r =take[i]%10;
   n=take[i]/10;
   printf("%d\n",take[i]);
   con[j++]=n+48;
//      printf("%c",con[j++]);
   con[j++]=r+48;
 //     printf("%c",con[j++]);
 }
   con[j++]= ':';
 //  printf("%c",con[j++]);
 }
 printf("%s",con);
getch();
}







/*
#include<stdio.h>
void main()
{
 int arr[]={1,2,3,4,5,6,7,8,9,10,11,12};
 int i=0,j=2,g=4,k,length;
 clrscr();
 length=sizeof(arr)/sizeof(int)-1;
 for(j=0;j<g;j++)
 {
 i=0;
    k=arr[i];
    for(i=0;i<=length;i++)
    {
       arr[i]=arr[i+1];
    }
    arr[length]=k;

 }
 i=0;
 while(i<=length)
 printf("%d ",arr[i++]);
getch();
}



 */




/*
#include<stdio.h>
#define MAXSIZE 10

char stack[MAXSIZE];
int top=-1;

char pop()
{
  return stack[top--];
}
int isFull()
{
 return top==MAXSIZE-1;
}

int isEmpty()
{
  return top==-1;
}

char push(char data)
{
if(!isFull())
  stack[++top]=data;
else
 puts("OVER FLOW");
}

char peak()
{
  return stack[top];
}

int isOperant(char symbol)
{
   if(symbol>='a' && symbol<='z' ||symbol>='A' && symbol<='Z' )
      return 1;
    return 0;
}

int isOperator(char symbol)
{
  if(symbol=='*' || symbol=='-' || symbol=='/' ||symbol=='+' )
     return 1;
   return 0;
}

int precedence(char symbol)
{
  switch(symbol)
  {
     case '*':
     case '/': return 2;
     case '+':
     case '-': return 1;
     case '(': return 0;
  }
  return 0;
}

void reverse(char inFix[])
{
 char t,st=0,la=strlen(inFix)-1;
 while(st<la)
 {
   t=inFix[st];
   inFix[st]=inFix[la];
   inFix[la]=t;
   st++;
   la--;
 }
 st=0;
 while(inFix[st]!=NULL)
 {
      if(inFix[st]=='(')
       inFix[st]=')';
      if(inFix[st]==')')
       inFix[st]='(';
     st++;
 }
}



void main()
{
  char inFix[100],postFix[100],symbol;
  int i=0,j=0;
  clrscr();
   puts("WRITE ANY INFIX EXPRESSION");
   gets(inFix);
   push('(');
   while(inFix[i]!=NULL)
   {
    symbol=inFix[i++];
      if(symbol=='{'||symbol=='('||symbol=='[')
	push(symbol);
      else if(symbol=='}')
      {
	 if(stack[top]=='{')
	   pop();
	   else j=1;
      }
      else if(symbol==']')
      {
	 if(stack[top]=='[')
	   pop();
	   else j=1;
      }
    else if(symbol==')')
      {
	 if(stack[top]=='(')
	   pop();
	   else j=1;
      }
   }
   if(j==0)
    puts("BALANCED");
    else
     puts("NOT BALANCED");
//printf("%s\n", postFix);
getch();
}




*/






