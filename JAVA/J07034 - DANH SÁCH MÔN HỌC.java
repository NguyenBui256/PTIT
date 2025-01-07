import java.io.*;
import java.util.*;

public class Hello {
	public static class MonHoc {
		String ma, ten;
		int tin;
		void input(Scanner in) {
			ma = in.nextLine();
			ten = in.nextLine();
			tin = Integer.parseInt(in.nextLine());
		}

		@Override
		public String toString() {
			return String.format("%s %s %d", ma,ten,tin);
		}
	}

	public static class Sortbyma implements Comparator<MonHoc> {
		public int compare(MonHoc a, MonHoc b)
		{
			return a.ten.compareTo(b.ten);
		}
	}
	public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new FileInputStream("MONHOC.in"));
		int n = Integer.parseInt(in.nextLine());
		MonHoc[] a = new MonHoc[n];
		for(int i = 0; i < n; i++) {
			MonHoc newMonHoc = new MonHoc();
			newMonHoc.input(in);
			a[i] = newMonHoc;
		}
		Arrays.sort(a,new Sortbyma());
		for(MonHoc i : a) {
			System.out.println(i);
		}
    }
}