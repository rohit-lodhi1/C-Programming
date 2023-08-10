int find(char s[],char s1[])
{
 int i,size=strlen(s),l=strlen(s1),j;
 for(i=0;i<=size;i++)
 {
    for(j=0;j<=l;j++)
    {
     if(s1[0]==s[i] && s1[j+1]==s[i+1] && s1[l]!=s[i++])
       return 1;

    }
  }
      return 0;
}

void main()
{
char s[]="hello is for dollop",s1[]="for";
clrscr();
if(find(s,s1)==1)
printf("word found\n%s->  %s",s,s1);
else
printf("%s is not found",s1);
getch();
}