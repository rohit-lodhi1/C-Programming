void revStr(char s[],int i)
{
int k=0,j=i;
char t;
while(k<j)
{
t=s[k];
s[k]=s[j];
s[j]=t;
k++;
j--;
}
}

void main()
{
int i;
char s[]="hello sir";
clrscr();
for(i=0;s[i]!='\0';i++)
{
  if(s[i+1]==' ')
  {
    revStr(s,i);
    printf("%s",s);
   }
  }
getch();
}





