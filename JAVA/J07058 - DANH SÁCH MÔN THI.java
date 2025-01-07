import java.util.*;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
    // static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) throws IOException, ClassNotFoundException {
		int t = 1; 
        // t = sc.nextInt();
        // sc.nextLine();
        while(t-- > 0)
        {
            solve();
        }
	}
    
    public static void solve() throws IOException, ClassNotFoundException
    {
        FileInputStream fis = new FileInputStream("MONHOC.in");
        Scanner sc = new Scanner(fis);
        int t = sc.nextInt();
        List<MonHoc> list = new ArrayList<>();
        sc.nextLine();
        while(t-- > 0)
        {
            String mamon, ten, hinhthuc;
            mamon = sc.nextLine();
            ten = sc.nextLine();
            hinhthuc = sc.nextLine();
            MonHoc mh = new MonHoc(mamon, ten, hinhthuc);
            list.add(mh);
        }
        list.sort(new Comparator<MonHoc>() {
            @Override
            public int compare(MonHoc o1, MonHoc o2) {
                return o1.mamon.compareTo(o2.mamon);
            }
        });
        for(MonHoc monhocc : list)
        {
            System.out.printf("%s %s %s\n", monhocc.mamon, monhocc.ten, monhocc.hinhthuc);
        }
    }

    static class MonHoc
    {
        public String mamon, ten, hinhthuc;
        public MonHoc(String mamon, String ten, String hinhthuc)
        {
            this.mamon = mamon;
            this.ten = ten;
            this.hinhthuc = hinhthuc;
        }
    }
    
}


