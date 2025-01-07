import java.io.*;
import java.util.*;

public class Hello {
	public static int[] a = new int[10];
	public static Scanner sc = new Scanner(System.in);
	public static Integer k;
	public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        int t = Integer.parseInt(sc.nextLine());
		while(t-- > 0) {
			solve();
		}
    }

	public static void solve() {
		String[] s1, s2;
		List<String> ls = new ArrayList<>();
		s1 = sc.nextLine().split(" ");
		s2 = sc.nextLine().split(" ");
		Map<String,Integer> m = new HashMap<String,Integer>();
		for(String x : s2) {
			int tmp = m.getOrDefault(x, 0);
			m.put(x,tmp+1);
		}
		for(String x : s1) {
			if(m.getOrDefault(x,0) == 0) {
				ls.add(x);
				m.put(x, 1);
			}
		}
		ls.sort(null);
		for(String x : ls) System.out.printf("%s ", x);
 		System.out.println();
	}
}