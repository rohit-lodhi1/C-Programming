
int stack[6];
int size=-1;
int maxSize=6;

int add(int val){
  if(size+1<=maxSize)
  stack[++size]=val;
}

int pop(){
  if(size>=-1)
    return stack[size--];
  exit();
}

insertAtBottom(int temp){
int temp2;
   if(size==-1)
      add(temp);
    else{
  temp2=pop();
  insertAtBottom(temp);
   add(temp2);
    }
}

void reverse(){
  int temp;
   if(size==-1)
      return ;
    else{
temp=pop();
reverse();
insertAtBottom(temp);
    }
}


int print(){
  int i;
  for(i=0;i<5;i++)
    printf("%d\n",stack[i]);
}

void  main()
{
clrscr();
add(1);
add(2);
add(3);
add(4);
add(5);
print();
  reverse();
print();
  getch();
}