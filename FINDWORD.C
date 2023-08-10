int find(char s[],char s1[])
{
   int i,j,f=0;
   for(i=0;s[i]!='\0';i++)
   {
     if(s[i]==s1[0])
     {
       f=1;
       for(j=0;s1[j]!='\0';j++)
       {
	 if(s[i+j]!=s1[j])
	 {
	   f=0;
	   break;
	 }
       }
     }
    if(f==1);
    {
    break;
    }
   }
  if(f==0)
  {
  return 0;
  }
  else
  return 1;
}
void main()
{
  char s[]="this is for dollop",s1[]="tdis";
  if(find(s,s1)==0)
  {
    printf("%s not found",s1);
  }
  else
  {
    printf("%s found",s1);
  }
 getch();
}






