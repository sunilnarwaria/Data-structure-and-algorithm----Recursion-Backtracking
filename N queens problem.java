
import java.io.*;
import java.util.*;

public class Main {
    public static void solve(boolean[][] board,int row,boolean[] col,boolean[] ndia,boolean[] odia,String asf){
        
         if(row == board.length){
             System.out.println(asf + ".");
             return;
         }
        
        for(int cols =0;cols<board[0].length;cols++){
            
            if(col[cols]== false && ndia[row+cols] == false && odia[row-cols + board.length -1] == false){
                col[cols] = true;
                ndia[row+cols]  = true;
                odia[row-cols + board.length -1]  = true;
                solve(board,row+1,col,ndia,odia, asf + row + "-" + cols + ", ");
                col[cols] = false;
                ndia[row+cols]  = false;
                odia[row-cols + board.length -1]  = false;
            }
        }
    }

    public static void main(String[] args) throws Exception {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        boolean[][] board = new boolean[n][n];
        //write your code here
        boolean[] col = new boolean[n];
        boolean[] ndia= new boolean[2 * n - 1];
         boolean[] odia= new boolean[2 * n - 1];
         
         solve(board,0,col,ndia,odia,"");

    }
    

}



