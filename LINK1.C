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

void checkPolind(struct node *temp)
{
  char data[10],i=0,la,f=0;
  while(temp!=NULL)
  {
     data[i++]=temp->data;
     temp=temp->next;
  }
  data[i]=NULL;
  i=0,la=strlen(data)-1;
  while(i<la)
  {
     if(data[i++]!=data[la--])
     {
	 f=1;
	 break;
     }
  }
  if(f==0)
   printf("LINKLIST IS POLLINDRAM");
  else
   printf("LINKLIST IS NOT POLLINDRAM");
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
addAtLast(2,1);
addAtLast(1,1);
checkPolind(start1);
addAtLast(4,0);
addAtLast(5,0);
addAtLast(9,0);
//addAtLast(70,0);
/*
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
*/
getch();

}


public string Permutation(String permutation,String input){
    if(input.length==0)
        System.out.println(permutation);
    else{
        for(int i=0;i<input.length;i++)
        Permutation(permutation+input.charAt(i),input.subString(0,i)+input.subString(i,input.length));
    }
}