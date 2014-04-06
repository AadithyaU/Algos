import java.io.*;
import java.util.*;

class Ideone {
	public static void main(String [] args) throws Exception {
		int t,a,b,count = 0;
		Scanner sc = new Scanner(System.in);
		t = sc.nextInt(); StringBuffer str,r;
		String [] in;
		while( t-- > 0) {
			count = 0;
			a = sc.nextInt();
			b = sc.nextInt();

			for(int i = a; i <= b; i++) {
				str = new StringBuffer(String.valueOf(i));
				r = str.reverse();
				if(i == Integer.parseInt(r.toString())) {
					count++;
				}
			}
			System.out.println(count);

		}
	}
}
