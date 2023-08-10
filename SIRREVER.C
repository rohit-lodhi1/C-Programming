#include<stdio.h>
#include<conio.h>
void main()
{
char s[]="hello";
int i=0,j=strlen(s)-1;
char t;
while(i<j)
{
t=s[i];
s[i]=s[j];
s[j]=t;
i++;
j--;
}
printf("%s",s);
getch();
}