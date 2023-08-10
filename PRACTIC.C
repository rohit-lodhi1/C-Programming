void intro()
{
  int x=0;
  int y=24;
  while(y>0)
  {
    gotoxy(x,y);
    printf("            ");
  //  delay();
    if(y!=1)
    clrscr();
    gotoxy(x,y--);
  }
}
void main()
{
  printf("THE world is fuck\n");
    printf("THE world is tuck");
    intro();
    getch();
}
