void main()
{
char s[]="dollop";
int n='o',r='e',i,size=strlen(s);
for(i=0;i<size;i++)
{
if(s[i]=='o')
s[i]=s[r];
}
printf("%c",s[n]);
getch();
}