void deleteChar(char s[],int ind)
{
int i;
for(i=ind;s[i]!=0;i++)
{
  s[i]=s[i+1];
  }

}
void main()
{
char s[]="this is  dollop";
int i;
clrscr();
for(i=0;s[i]!=0;i++)
{
  if(s[i]==' ' && s[i+1]==' ')
  {
    deleteChar(s,i);
    i--;
    }
    }
    printf("%s",s);

    getch();

    }