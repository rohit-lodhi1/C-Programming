int isPreExist(char str[],char ch,int ind)
{
int i;
for(i=ind;i>0;i--)
{
if(ch==str[i])
return 0;
}
return 1;
}
void main()
{
char s[]="dollop info";
int i,j,c,size=strlen(s);
for(i=0;i<size;i++)
{
c=0;
if (isPreExist(s,s[i],i-1))
{
for(j=i;j<size;j++)
{
if(s[j]==s[i])
c++;
}
printf("%c->%d\n",s[i],c);
}
}
getch();
}