#include<stdio.h>

struct course
{
    char  sem1[10];
    char sem2[10];
};


struct student
{
  struct course semFirst;
  int studentRollNo;
  char *studentName;

};

void main()
{
  struct student bca[3],*sptr;
  struct course Bca[3],*ptr;
  int i,j,c=0;
  clrscr();
  for(i=0;i<2;i++)
  {
     sptr=&bca[i];
     printf("Enter %d. Student Rollno --",i+1);
     scanf("%d",&sptr->studentRollNo);
     printf("Entre  %d. Student Name  --",i+1);
     fflush(stdin);
     gets(sptr->studentName);
      ptr=&Bca[i];
      printf("Entre  %d. the course name --",i+1);
      gets(ptr->coursename);


  }
    c=0;
  for(i=0;i<2;i++)
  {
     sptr=&bca[i];
    printf("\n%d student Rollno -  %d",i+1,sptr->studentRollNo);
     printf("\n%d student name - %s",i+1,sptr->studentName);
     ptr=&Bca[i];
     printf("\n\n\tCourse detail\n  Course --  %s\n",ptr->coursename);

    getch();
  }

}