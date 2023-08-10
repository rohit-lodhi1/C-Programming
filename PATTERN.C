void main()
{
char *ch="********";
int a,len;
clrscr();
len=printf(ch);
clrscr();
for(a=1;a<=len;a++)
printf("%*.*s\n",len,a,ch);
getch();
}















