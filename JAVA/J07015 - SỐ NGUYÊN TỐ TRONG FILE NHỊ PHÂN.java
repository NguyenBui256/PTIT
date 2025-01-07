import java.io.*;
import java.util.*;

public class Hello {
	public static int[] a = new int[10000];
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
		ArrayList<Integer> b = (ArrayList<Integer>)ois.readObject();
		for(int x : b){
			if(a[x] > 0) a[x]++;
			else {
				if(check(x)) a[x] = 1;
			}
		}
		for(int i = 2; i < 10000; i++) {
			if(a[i] > 0) System.out.println(i + " " + a[i]);
		}
    }

	public static boolean check(int n) {
		if(n < 2) return false;
		for(int i = 2; i <= Math.sqrt(n); i++) {
			if(n % i == 0) return false;
		}
		return true;
	}
	
}