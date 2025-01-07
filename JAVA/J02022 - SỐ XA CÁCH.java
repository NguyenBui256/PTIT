import java.io.*;
import java.util.*;

public class Hello {
	public static int[] a = new int[10];
	public static Scanner sc = new Scanner(System.in);
	public static Integer k;
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        int t = sc.nextInt();
		while(t-- > 0) {
			for(int i = 1; i <= 9; i++) {
				a[i] = 0;
			}
			k = sc.nextInt();
			ql("",-1);
			System.out.println();
		}
    }

	public static void ql(String s, int i) {
		if(i == k - 1) {
			System.out.println(s);
			return;
		} 
		for(char j = '1'; j <= (char)(k + '0'); j++){
			if(a[j-'0'] == 0) {
				if(s.isEmpty() || (i < s.length() && s.charAt(i) - 1 != j && s.charAt(i) != j && s.charAt(i) + 1 != j)) {
					StringBuilder tmp = new StringBuilder(s);
					tmp.append(Character.toString(j));
					// System.out.printf("%s, %s %s", s, tmp, j);
					a[j-'0'] = 1;
					ql(tmp.toString(),i+1);
					a[j-'0'] = 0;
				}
			}
		}
	}
}