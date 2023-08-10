#include<stdio.h>
#include<conio.h>
void main()
{
char s[]="earth is";
int c=0,i,size=strlen(s);
for(i=0;i<size;i++)
{
if(s[i]>=48 || s[i]<=57)
c++;
}
printf("%d",c);
getch();
}
