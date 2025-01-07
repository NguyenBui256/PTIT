import java.io.*;
import java.util.*;

public class Hello {
	static int[] f = new int[1000001];

    public static void era() {
        Arrays.fill(f, 1);
        f[0] = f[1] = 0;
        for (int i = 2; i <= 1000; i++) 
            if (f[i] == 1) 
                for (int j = i * i; j <= 1000000; j += i) 
                    f[j] = 0;
    }
	public static void main(String[] args) throws FileNotFoundException, ClassNotFoundException, IOException {
		era();
		ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));
		List<Integer> l = (ArrayList<Integer>) ois.readObject();
		List<Integer> ans = new ArrayList<Integer>();
        int[] a = new int[1000005];
        for (Integer i : l) {
			a[i] += f[i];
		}
		int cnt = 0;
		for(int i = 1000000; i >= 2; i--) {
			if(a[i] > 0) {
				System.out.println(i + " " + a[i]);
				cnt++;
			}
			if(cnt == 10) break;
		}
		ois.close();
    }
}