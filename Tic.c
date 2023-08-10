import java.util.*;
class Table{

	public static void main(String[] args){

		char board[]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
		drawn(board);
		Scanner sc=new Scanner(System.in);
		int move=sc.nextInt();
		boolean play=true;
		while(play)
		{
			usermove(board,'x');
			drawn(board);
			play=checkwin(board,'x');
			if(play==false)
				continue;
			play=gameover(board);
			if(play==false)
				continue;

			usermove(board,'o');
			drawn(board);
			play=checkwin(board,'o');


			play=gameover(board);
	

		}

	}

	public static boolean gameover(char board[]){

           boolean temp=false;
		  for(int i=0;i<board.length;i++)
		  {
		  	if(board[i]==' ')
		  		temp= true;
		  }
		   if(!temp)
		   	 System.out.println("Game Over :(");
		   	 	return temp;
		   	 
		   	  

          		  	
		
	}

  public static boolean checkwin(char board [],char X_O){
  
         //boolean temp=true;
         if((board[0]==X_O && board[1]==X_O && board[2]==X_O) ||
         	(board[3]==X_O && board[4]==X_O && board[5]==X_O) ||
         	(board[6]==X_O && board[7]==X_O && board[8]==X_O) ||
         	(board[0]==X_O && board[3]==X_O && board[6]==X_O) ||
         	(board[1]==X_O && board[4]==X_O && board[7]==X_O) ||
         	(board[2]==X_O && board[5]==X_O && board[8]==X_O) ||
         	(board[0]==X_O && board[4]==X_O && board[8]==X_O) ||
         	(board[2]==X_O && board[4]==X_O && board[6]==X_O))
         {
         	System.out.println("WoooFooo  "+X_O+" You Won");
         	return false;

         }
         else
         return true;
   }

	public static void usermove(char board [],char X_O){
          
        Scanner sc=new Scanner(System.in);
		System.out.println("Please Entre space between 1-9");
		int move=sc.nextInt()-1;
	
			if(board[move]==' ')
			  {
			    board[move]=X_O;
			    gameover(board);
			   
			  }
			else
			usermove(board,X_O);


	}


	public static void drawn(char board []){

          String row_1 = board[0]+"|"+board[1]+"|" + board[2];
          String row_2 = board[3]+"|"+board[4]+"|" + board[5];
          String row_3 = board[6]+"|"+board[7]+"|" + board[8];

            System.out.println('\n'+row_1+'\n'+row_2+'\n'+row_3+'\n');
	
	

	}
		   	 
}