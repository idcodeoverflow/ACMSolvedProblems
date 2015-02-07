import java.util.*;
import java.io.*;
class Main{
	public static void main(String args[]){
		int i = 0, v[] = new int[10], n = 0;
		boolean cond = false;
		String str;
		Scanner sc = new Scanner(new InputStreamReader(System.in));
		for(i = 1; i <= 5; i++){
			str = sc.next();
			if(str.contains("FBI")){
				v[n++] = i;
				//System.out.print(i + " ");
				cond = true;
			}
		}
		
		if(n > 0){
			System.out.print(v[0]);
		}
		for(i = 1; i < n; i++)
			System.out.print(" " + v[i]);
		if(!cond)
			System.out.print("HE GOT AWAY!");
	}
}
