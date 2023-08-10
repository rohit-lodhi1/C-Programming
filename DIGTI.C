#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[]="HEllo4556 DollOp";
int i,size=strlen(s);
for(i=0;i<size;i++)
{
if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')
{
printf("%c",s[i]);
}
}
getch();
}