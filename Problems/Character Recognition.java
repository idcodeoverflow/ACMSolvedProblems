import java.util.*;
import java.io.*;

class Main{
	
	static int count(String str){
		int c = 0, i = 0;
		for(; i < str.length(); i++)
			if(str.charAt(i) == '#')
				c++;
		return c;
	}
	
	public static void main(String args[]){
		Scanner sc = new Scanner(new InputStreamReader(System.in));
		String line = "", text = "";
		double res = 0.0;
		int n = 0, c = 0;
		n = sc.nextInt();
		sc.nextLine();
		while(n != 0){
			line = sc.nextLine();
			text += line;
			if(line.equals("")){
				c = count(text);
				res = 1.0 - (double)c / text.length();
				//System.out.println(c + " " + text.length());
				if(c % text.length() == 0)
					System.out.println("Efficiency ratio is " + (int)(res * 100.0) + "%.");
				else
				{
					res = res * 100.0;
					String f = String.format("%.1f", (res));
					if(f.contains(".0"))
						System.out.println("Efficiency ratio is " + (int)(res) + "%.");
					else
						System.out.println("Efficiency ratio is " + f + "%.");
				}
				text = "";
				n--;
			}
		}
	}
}
