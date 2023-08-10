#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[]="this is a world of";
int i,size=strlen(s);
for(i=0;i<=size;i++)
{
if((s[i]>='a' && s[i]<='z')
{
printf("%c is small",s[i]);
}
else
if(s[i]>='A' && s[i]<='Z')
{
printf("%c is capital",s[i]);
}
else
if( s[i]>=48 && s[i]<=57)
{
printf("%c is digit",s[i]);
}
}
getch();
}

