
import java.math.BigInteger;
import java.util.*;
import java.io.*;
class Main{

	public static void main(String args[]){
		BigInteger n = new BigInteger("0");
		BigInteger m = new BigInteger("-1");
		BigInteger dos = new BigInteger("2");
		BigInteger mod;
		boolean cond = false;
		Scanner scan = new Scanner(new InputStreamReader(System.in));
		
		n = new BigInteger(scan.next());
		
		while(n.compareTo(m) != 0){
		
			if(cond){
				System.out.println();
			}
			cond = true;
			
			mod = n.mod(dos);
			if(mod.compareTo(BigInteger.ONE) == 0){
				System.out.print("f(" + n + ") = " + ((n.add(BigInteger.ONE)).divide(BigInteger.valueOf(2))));
			} else {
				System.out.print("f(" + n + ") = " + (n.divide(BigInteger.valueOf(2))));
			}
			System.out.println();
			
			
			n = new BigInteger(scan.next());
		
		}
		
		
	}

}