#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[]="Earth #$@%^ suRfaCe21243";
int i,size=strlen(s);
for(i=0;i<size;i++)
{
if(s[i]>='a' && s[i]<='z')
{
printf("%c is small\n",s[i]);
}
else if(s[i]>='A'&& s[i]<='Z')
{
printf("%c is capital\n",s[i]);
}
 else if(s[i]>=48 && s[i]<=57)
{
printf("%c is number\n",s[i]);
}
else
{
 printf("%c is symbol\n",s[i]);
}
}
getch();
}