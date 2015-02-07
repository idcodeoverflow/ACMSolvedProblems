import java.util.*;
import java.io.*;
import java.math.BigInteger;
	
class Main{
	public static void main(String args[]){
		Scanner sc = new Scanner(new InputStreamReader(System.in));
		int n = 1, b = 0, s = 0;
		n = sc.nextInt();
		while(n > 0){
			n--;
			s = sc.nextInt();
			b = sc.nextInt();
			System.out.println(Integer.toString(s, b).toUpperCase());
		}
	}
}
