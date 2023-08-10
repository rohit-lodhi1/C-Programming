void main()
{
char s1[]="hello",s2[]="dollop";
int i=strlen(s1),size=strlen(s2),j;
for(j=0;j<=size;j++)
{
s1[i++]=s2[j];
}
printf("%s",s1);
getch();
}
