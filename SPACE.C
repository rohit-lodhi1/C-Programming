#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[]="hello this is dollop";
int c=0,i,size=strlen(s);
for(i=0;i<size;i++)
{
if(i==0 || s[i-1]==' ')
{
if(s[i]>=97 && s[i]<=122)
s[i] = s[i]-32;
}
}
printf("\n%s",s);
getch();
}