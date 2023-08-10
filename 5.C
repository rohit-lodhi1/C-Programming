#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[]="aesjdsoiu";
int i,size=strlen(s);
for(i=0;i<size;i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i'|| s[i]=='u')
{
printf("%c is vowel\n",s[i]);
}
}
getch();
}
