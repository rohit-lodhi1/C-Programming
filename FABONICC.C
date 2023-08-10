void main()
{
int i,t1=0,t2=1,t3=t1+t2,n=10;
printf("%d , %d",t1,t2);
for(i=3;i<=n;i++)
{
t1=t2;
t2=t3;
t3=t1+t2;
printf(",%d",t3);
}
getch();
}