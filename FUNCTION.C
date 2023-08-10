#include<stdio.h>
#include<conio.h>
#include<string.h>
void vowelStr(char s[])
{
int i,size=strlen(s),c=0;
for(i=0;i<=size;i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o' || s[i]=='u')
{
if(s[i]>=48 && s[i]<=57)
c++;
}
{
printf("%c",s[i]);
}
}
}
void main()
{
clrscr();
vowelStr(" aeous adfkcndihiov");
getch();
}
