int fact(int n,int pw)
{
	if(pw==1)
	 return n;
	return n*fact(n,pw=pw-1);

}

void main()
{
	int n=3,pw=3;
	printf("%d",fact(n,pw));
getch();
}