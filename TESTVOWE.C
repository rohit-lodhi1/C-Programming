#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[]="namaan";
int i,size=strlen(str),s,l,f=0;
s=0;
l=strlen(str)-1;
clrscr();
while(s<l)
{
f=1;
if(str[s]!=str[l])
{
printf("%s is not pollinegram",s);
break;
}
s++;
l--;
}
f==0;
printf("%s is pollinegram",s);
getch();
}
