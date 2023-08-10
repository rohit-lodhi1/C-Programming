int pol(char s[],int ind,int l)
{
  int f=1;
  while(ind<l)
  {
    if(s[ind]!=s[l])
    {
     f=0;
     break;
    }

    ind++;
    l--;


  }
    if(f==0)
    return 1;

}


void get(char s[],int ind)
{
  int i=ind;
  for(i=ind;s[i]!=0;i++)
  {
     if(s[i+1]==' ' || s[i+1]==0)
    if( pol(s,ind,i)==1);
       printf("%s is not pollindrom",s);

  }


}


void main()
{
  char s[]="naman samas";
  int i,l;
  clrscr();
  for(i=0;s[i]=='\0';i++)
  {
    if(s[i-1]==' ' || i==0)
    {
       get(s,i);

    }
  }

     getch();

}