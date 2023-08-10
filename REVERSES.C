void revStr(char s[])
{
int i=0,j=strlen(s)-1;
char t;
while(i<j)
{
t=s[i];
s[i]=s[j];
s[j]=t;
i++;
j--;
}
printf("%s",s);
}
void main()
{
revStr("hello");
getch();
}