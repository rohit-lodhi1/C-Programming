void insert(char s[],int ind,int size)
{
int i;
for(i=size;i>=ind;i--)
{
  s[i+1]=s[i];
  }
  s[ind]='l';
  }
void main()
{
char s[]="helelo",ch='e';
int i,size=strlen(s)-1;
clrscr();

for(i=0;s[i]!='\0';i++)
{
   if(ch==s[i])
   {
     insert(s,i,size);
     break;
   }
}
     printf("%s",s);

     getch();
}
