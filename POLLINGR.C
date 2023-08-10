#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[]="namman";
int s=0,l=strlen(str)-1,f=0;
clrscr();
while(s<l)
{
if(str[s]!=str[l])
{
f=1;
printf("%s is not pollingram",str);
}
s++;
l--;
}
f==0;
printf("%s is  pollingram",str);
getch();
}