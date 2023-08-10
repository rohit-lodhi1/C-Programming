#include<stdio.h>
void copy(int *dst,int *src,int size)
{
   int i;
   for(i=1;i<size;i++)
   {
       dst[i]=src[i];
   }

}

void allocatMemory(int **p,int *size)
{
   int *t;
   *size=*size+5;

   t=(int*)malloc((*size)*sizeof(int));
   copy(t,*p,*size-5);
   *p=t;
   puts("copied");
}

void add(int **p,int *size,int *length,int val)
{
    if( *size==0 || *length+1==*size)
    {
	allocatMemory(p,size);
//	printf("size of 0");
    }
   ++*length;
   (*p)[*length]=val;
}
void print(int *p,int length)
{
   int i;
   for(i=0;i<=length;i++)
   {
     printf("%d ",p[i]);
   }
}

void main()
{
  int *p=NULL;
  int i,size=0,length=-1;
  clrscr();
  for(i=1;i<=22;i++)
  add(&p,&size,&length,10*i);

  print(p,length);

  getch();
}





