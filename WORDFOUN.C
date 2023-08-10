char search(char s[], int ind, char s1[])
{
  int j;
  for(j=0;s1[j]!=0;j++)
  {
     if(s[ind++]!=s1[j])
     {
       return 0;
     }
  }
  if(s1[j]=='\0' && s[ind]==' ' || s[ind]=='\0')
  {
    return 1;
  }
  else
  return 0;

}
void main()
{
  char s[]="hello hi how are you" , s1[]="hello";
  int i;
  clrscr();
  for(i=0;s[i]!=0;i++)
  {
    if(s[i]==s1[0] && s[i-1]==' ' || i==0)
    {
      if(search(s,i,s1))
      {
       printf("%s is found",s1);
       break;
      }
    }

  }

  if(search(s,i,s1)==0)
  printf("%s not found",s1);
  getch();
}
