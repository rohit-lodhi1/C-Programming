
struct sample{
  int data;
  struct sample *soup;
}*lets=NULL,*now=NULL


int addAtLast2(int data)
{
   struct node *temp1;
 //  int data;
  // puts("Entre the data");
  // scanf("%d",&data);
   temp1=(struct sample *)malloc(sizeof(struct sample));
     temp1->data=data;
     temp1->soup=NULL;
   if(lets==NULL)
      lets=temp1;
   else
      now->soup=temp1;
   now=temp1;
   temp1=NULL;
	return 1;
}


struct node* revByRecur2(struct node *temp)
{
   struct node *revHead;
   if(temp==NULL||temp->soup==NULL)
   {
      now=lets;
      return temp;
   }
   revHead=revByRecur(temp->soup);
   temp->soup->soup=temp;
   temp->soup=NULL;
   return revHead;
}

void viewData(    struct node *temp)
{
    while(temp!=NULL)
    {
	printf("%d ->",temp->data);
	temp=temp->next;
    }
    puts("NULL");
}