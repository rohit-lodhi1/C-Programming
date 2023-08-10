#define MAX 5

int frontTop =-1;
int rearTop = -1;
int rstack[MAX];
int fstack[MAX];

int isEmptyr()
{
	return rearTop==-1;
}
int isEmptyf()
{
 return frontTop==-1;
}
int isFull()
{
	return  rearTop == MAX-1;
}


int push(int data)
{
    if(!isFull())
    {
//    if(frontTop==-1)
  //	frontTop++;
    rstack[++rearTop]=data;
   }
else
	exit(1);
}

int pop()
{
	if(!isEmptyr())
	{
	    if(isEmptyf())
	    {
		while(rearTop != -1)
	       fstack[++frontTop]=rstack[rearTop--];
	     }
//	     else
		return fstack[frontTop--];
		return fstack[--frontTop];
	}
else
{
puts("EMpty");
// return fstack[frontTop--];
exit(1);
}

}

void main()
{
clrscr();
   push(20);
   push(30);
   push(40);
   push(50);


   printf("%d\n",pop());
      push(40);
       printf("%d\n",pop());
	    printf("%d\n",pop());
		    printf("%d\n",pop());
   getch();
}













