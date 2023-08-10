#include<stdio.h>
#define MAXSIZE 10
#define true 1
#define false 0

char stack[MAXSIZE];
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

int isOperant(char value)
{
   if(value >= 'a' && value <= 'z' || value >= 'A' && value <= 'Z' )
	 return 1;
   return 0;
}

int isOperator(char value)
{
   if( value == '*' || value == '+' || value == '-'|| value == '/')
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

void main()
{
 char inFix[100],postFix[100],symbol;
 int i=0,j=0;
  clrscr();
  printf("ENTRE ANY EXPRESSION :- ");
  gets(inFix);
while(inFix[i]!=NULL)
{
   symbol=inFix[i++];
    if(symbol=='{'||symbol=='('||symbol=='[')
     push(symbol);
    else if(symbol==')')
    {
      if(stack[top]=='(')
       pop();
      else j=1;
     }
     else if(symbol=='}')
     {
       if(stack[top]='{')
       pop();
       else j=1;
     }
     else if(symbol==']')
     {
      if(stack[top]=='[')
       pop();
       else j=1;
     }
     else
     {
     j=1;
      break;
      }
}
if(j==0)
printf("BALANCED");
else
printf("NOT BALANCED");

    getch();
}