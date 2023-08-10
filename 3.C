#define MAXSIZE 100
#define true 1
#define false 0
#include<stdio.h>
char stack[MAXSIZE];
int top=-1;

char pop()
{ char data;
  data=stack[top--];
 return data;
}

int push(char data)
{
  stack[++top]=data;
  return true;

}

int isOprand(char symbol)
{
  if(symbol>='a'&& symbol<='z'|| symbol>='A'&& symbol<='Z')
  {
    return 1;
  }
  else
  return 0;
}
int prisidence(char symbol)
{
 switch(symbol)
 {
   case '(':return 0;
   case '+':
   case '-':return 1;
   case '*':
   case '/':return 2;
 }
}
 int isOprator(char symbol)
 {
   if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/');
   return true;
   return false;
 }
 void main()
 {
   char infix[100],postfix[100];
   char symbol,temp;
   int i=0,j=0;
   clrscr();
   printf("enter your expression:");
   fflush(stdin);
   gets(infix);
   push('(');
   while(infix[i]!=NULL)
   {
     symbol=infix[i++];
     if(isOprand(symbol))
     {
       postfix[j++]=symbol;
     }
     else if(symbol=='(')
     {
   push(symbol);
     }
     else if(isOprator(symbol))
     {
   while( prisidence(symbol)<=prisidence(stack[top]))
   postfix[j++]=pop();
      push(symbol);
     }
    else if(symbol==')')
     {
       while(stack[top]!='(')
   {
     postfix[j++]=pop();
   }
       temp=pop();
     }
  }
    while(stack[top]!='(')
    postfix[j++]=pop();
   postfix[j]=NULL;
   printf("%s",postfix);
   getch();
  }