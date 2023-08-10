void change(char s[])
{
int i,size=strlen(s);
clrscr();
for(i=0;i<size;i++)
{
if(s[i]>='A' && s[i]<='Z')
{
printf("%c is capital",s[i]);
}
}
}
void main()
{
char s[]="ABAessaIU";
change(s);
getch();
}