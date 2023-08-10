void main()
{
char s[]="hello this is for dollop",s1[]="for" ;
int i,j,f=0;
clrscr();
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
   if(f==1)
   {
     break;
   }
   }
   if(f==0)
   {
   printf("word not found %s",s1);
   }
   else
   {
   printf("word found %s",s1);
   }
   getch();
   }


