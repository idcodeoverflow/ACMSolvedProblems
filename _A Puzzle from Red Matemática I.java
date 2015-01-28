import java.util.*;
import java.io.*;
import java.math.BigInteger;

class Main{

	public static void main(String args[]){
		Scanner sc = new Scanner(new InputStreamReader(System.in));
		BigInteger big;
		String str, s;
		int a = 0, b = 0, sum = 0;
		a = sc.nextInt();
		b = sc.nextInt();
		while(a != 0 && b != 0){
			sum = 0;
			str = "";
			s = Integer.toString(a);
			for(int i = 0; i < b; i++)
				str += s;
			big = new BigInteger(str);
			big = big.pow(2);
			str = big.toString();
			for(int i = 0; i < str.length(); i++)
				sum += str.charAt(i) - '0';
			System.out.println(sum);
			a = sc.nextInt();
			b = sc.nextInt();
		}
	}
}
