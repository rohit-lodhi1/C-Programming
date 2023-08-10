void stringPermutation(char permutation[],char arr[]){
      char pass[7];
  if(strlen(arr)==0)
    printf("%s",permutation);
  else{
    int i=0;
    for(i=0;i<strlen(arr);i++){

	 if(i==0)
	 {
	  pass[0]=arr[1];
	  pass[1]=arr[2];
	 }
	 else{
	      pass[0]=arr[i-1];
	      pass[1]=arr[2];
	 }
       stringPermutation(strcat(permutation,arr[i]),pass);
    }
  }
}


void stringRotate(char arr[]){
	char permutation[]={""};
	stringPermutation(permutation,arr);
}

void main()
{
	char arr[]={"abc"};
	printf("%s",strcat(arr,"d"));
	getch();
  stringRotate(arr);
  getch();
}
