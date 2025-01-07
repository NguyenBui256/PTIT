import java.util.*;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
    static int[] a = new int[20];
    static int n, k;
    static Scanner sc = new Scanner(System.in);
    static int end = 0;
	public static void main(String[] args) {
		int t = 1; 
        // t = sc.nextInt();
        while(t-- > 0)
        {
            solve();
        }
	}
    
    public static void solve()
    {
        n = sc.nextInt(); k = sc.nextInt();
        int cnt = 0;
        init();
        while(end == 0)
        {
            for(int i = 1; i <= k; i++) System.out.printf("%d ", a[i]);
            System.out.println();
            cnt++;
            sinh();
        }
        System.out.printf("Tong cong co %d to hop", cnt);
    }
    
    public static void sinh()
    {
        int i = k;
        while(i >= 1 && a[i] == n - k + i) i--;
        if(i == 0) end = 1;
        else{
            a[i]++;
            for(int j = i + 1; j <= k; j++) a[j] = a[j-1] + 1;
        } 
    }
    
    public static void init()
    {
        for(int i = 1; i <= k; i++) a[i] = i;
    }
}
