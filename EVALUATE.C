#include<stdio.h>
#define MAXSIZE 20
#define true 1
#define false 0

int stack[MAXSIZE];
int top=-1;

int isFull()
{
	return top==MAXSIZE?true:false;
}

int isEmpty()
{
	return top==-1?true:false;
}

int push(char data)
{
	if(!isFull())
	{
	   stack[++top]=data;
	}
	else
	  printf("Over FLow\n");
}

char pop()
{
	int data=-1;
	if(!isEmpty())
	{
	  data=stack[top--];
	}
	return  data;
}

int peak()
{
	return stack[top];
}

int isOperant(char symbol)
{
  if(symbol>='a' && symbol<='z' || symbol>='A' && symbol<='Z' )
     return 1;
   return 0;
}

int isOperator(char symbol)
{
  if( symbol == '*' || symbol == '+' || symbol == '/' || symbol == '-' )
     return 1;
   return 0;
}


int precedence(char value)
{
   switch(value)
   {
       case '/' : return 2;
       case '*' : return 2;
       case '+' : return 1;
       case '-' : return 1;
       case '(' : return 0;
   }
   return 0;
}


/*
void viewData()
{
  if(stack[top]!='\0')
  {
    int temp=pop();
    viewData();
    printf("%d\n",temp);
  }
}
*/



void main()
{
  char inFix[100],symbol;
  int i=0,t,a,b;
   clrscr();
  puts("ENTRE ANY POSTFIX EXPRESSION");
  gets(inFix);
//printf("%s",inFix);
  while(inFix[i]!=NULL)
  {
      symbol=inFix[i++];
      if(isOperant(symbol))
      {
	   printf("Entre the value of %c :- ",symbol);
	   scanf("%d",&t);
	   push(t);
      }
      if(isOperator(symbol))
      {
	  a=pop();
	  b=pop();
	switch(symbol)
	{
	  case '*':push(b*a);break;
	  case '-':push(b-a);break;
	  case '/':push(b/a);break;
	  case '+':push(b+a);break;
	}
      }
  }
   while(top!=-1)
printf("%d",pop());
  getch();
}