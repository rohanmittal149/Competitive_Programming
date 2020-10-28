package geeksforgeeks;
import java.util.*;


public class RotateArrayby1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scanner = new Scanner(System.in);
		int t = scanner.nextInt();
		while(t>0) {
		int N = scanner.nextInt();
		int []A = new int[N];
		
		for (int i = 0; i < A.length; i++) {
			A[i] = scanner.nextInt();
			
		}
		int []B = new int[N];
		B[0] = A[N-1];
		
		for(int j=0;j<N-1;j++) {
			for(int k=j+1;k<N;k++) {
				B[k] = A[j];
			}
		}
		for(int l:B) {
			System.out.println(l+ "");
		}
	t--;	
	}
	}
}
