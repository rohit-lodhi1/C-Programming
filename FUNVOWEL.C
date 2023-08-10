void change(char s[])
{
int i,size=strlen(s);
for(i=0;i<size;i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
printf("%c\n",s[i]);
}
}
void main()
{
char s[]="helloius eou";
clrscr();
change(s);
getch();
}