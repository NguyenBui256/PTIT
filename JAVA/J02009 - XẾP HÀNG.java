import java.util.*;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
    static Scanner sc = new Scanner(System.in);
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
        int t; t = sc.nextInt();
        List<Khach> list = new ArrayList<>();
        while(t-- > 0)
        {
            int x, y; 
            x = sc.nextInt();
            y = sc.nextInt();
            Khach newKhach = new Khach(x,y);
            list.add(newKhach);
        }
        list.sort(new Comparator<Khach>(){
            @Override
            public int compare(Khach a, Khach b)
            {
                return a.come - b.come;
            }
        });
        int ans = 0;
        for(Khach kh : list)
        {
            ans = Math.max(kh.come,ans);
            ans += kh.go;
            //System.out.println(ans);
        }
        System.out.println(ans);
    }

    static class Khach
    {
        public int come, go;
        Khach(int come, int go)
        {
            this.come = come;
            this.go = go;
        }
    }
    
}


