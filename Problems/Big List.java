import java.util.*;
import java.io.*;

class Res{
	public String q;
	public String r;
	public Res(String a, String b){
		q = a;
		r = b;
	}
}

class Main{
	
	static int n = 0, m = 0, i = 0, r = 0;
	static Res []v = new Res[10004];
	static String isIn(String s){
		for(int j = 0; j < n; j++)
			if(v[i].q.equals(s))
				return v[i].r;
		return "";
	}
	
	public static void main(String args[]){
		Scanner sc = new Scanner(new InputStreamReader(System.in));
		String ques, w[], s, resp;
		n = sc.nextInt();
		m = sc.nextInt();
		
		for(i = 0; i < n; i++){
			v[i] = new Res(sc.next(), sc.next());
		}
		sc.next();
		for(i = 0; i < m; i++){
			ques = sc.nextLine();
			w = ques.split(" ");
			s = isIn(w[0]);
			//System.out.println(">>>>>>" + ques);
			if(w.length > 1){
				resp = w[1];
				if(s.equals(resp)){
					System.out.println("ok");
				} else {
					System.out.println("wrong");
				}					
			} else {
				//if(s == -2)
					System.out.println("not found");
				//else
				//	System.out.println("wrong");
			}
			
		}
		
	}
}
