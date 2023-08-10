void change(char s[])
{
int i,size=strlen(s);
for(i=0;i<size;i++)
{
if(s[i]>='A' && s[i]<='Z')
s[i]=s[i]+32;
{
printf("%c",s[i]);
}
}
}
void main()
{
char s[]="HeLLo";
change(s);
getch();
}