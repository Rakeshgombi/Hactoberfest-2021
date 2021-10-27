import java.util.*;
public class KnightsTour {

	public static void main(String[] args) {
		solveKnightsTour();

	}
	private static void solveKnightsTour() {
		int[][] sol = new int[8][8];
		for(int i = 0; i < sol.length; i++) {
			for(int j = 0; j < sol.length; j++) {
				sol[i][j] = -1;
			}
		}
		
		sol[0][0] = 0;
		int[] x = {2,1,-1,-2,-2,-1,1,2};
		int[] y = {1,2,2,1,-1,-2,-2,-1};
		boolean flag = solveForKnightsTour(0,0,1,x,y,sol);
		if(flag == true) {
			display(sol);
		}
	}
	private static boolean solveForKnightsTour(int i, int j, int k, int[] x, int[] y, int[][] sol) {
		if(k == sol.length * sol.length) {
			return true;
		}
		
		for(int p = 0; p < 8; p++) {
			int next_x = x[p] + i;
			int next_y = y[p] + j;
			
			if(isSafe(next_x,next_y,sol)) {
				sol[next_x][next_y] = k;
				if(solveForKnightsTour(next_x, next_y, k + 1, x, y, sol)) {
					return true;
				}else {
					sol[next_x][next_y] = -1;
				}
			}
		}
		return false;
	}
	private static boolean isSafe(int next_x, int next_y, int[][] sol) {
		if(next_x < 0 || next_x >= sol.length || next_y < 0 || next_y >= sol.length  || sol[next_x][next_y] > 0) {
			return false;
		}
		return true;
	}
	private static void display(int[][] sol) {
		for(int i = 0; i < sol.length; i++) {
			for(int j = 0; j < sol[0].length; j++) {
				System.out.print(sol[i][j] + " ");
			}
			System.out.println();
		}
		
	}

}
