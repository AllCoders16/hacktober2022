//username-->ShreyaDubey1001
//github account-->https://github.com/ShreyaDubey1001/
//leetcode link:https://leetcode.com/problems/sudoku-solver/
import java.util.*;

public class Main {
  public static void display(int[][] board){
    for(int i = 0; i < board.length; i++){
      for(int j = 0; j < board[0].length; j++){
        System.out.print(board[i][j] + " ");
      }
      System.out.println();
    }
  }
  public static boolean valid(int [][]board,int x,int y,int val){
      //row check
        for(int j=0;j<board[0].length;j++){
            if(board[x][j]==val)return false;
        }
        //column check
        for(int i=0;i<board.length;i++){
            if(board[i][y]==val)return false;
        }
        //submatrix check
        int posi=(x/3)*3;
        int posj=(y/3)*3;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i+posi][j+posj]==val)return false;
            }
        }
        return true;   
  }
  public static void solveSudoku(int[][] board, int i, int j) {
    // write yopur code here
    int nr=0;//new row
    int nc=0;//new column
        if(i==board.length){
            display(board);
            return;
        }
        if(j==board[0].length-1){//for traversing next row
            nr=i+1;
            nc=0;
        }
        else{
            nr=i;
            nc=j+1;
        }
        if(board[i][j]!=0)
            solveSudoku(board,nr,nc);
        else{
            for(int c=1;c<=9;c++){
                if(valid(board,i,j,c)==true){
                    board[i][j]=c;
                    solveSudoku(board,nr,nc);
                    board[i][j]=0;
                }
            }
        }
  }

  public static void main(String[] args) throws Exception {
    Scanner scn = new Scanner(System.in);
    int[][] arr = new int[9][9];
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        arr[i][j] = scn.nextInt();
      }
    }

    solveSudoku(arr, 0, 0);
  }
}
