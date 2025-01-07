import java.util.*;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
    static long[] F;
    static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		int t = 1; 
        t = sc.nextInt();
        while(t-- > 0)
        {
            solve();
        }
	}
    
    public static void solve()
    {
        int n; n = sc.nextInt();
        int[] a = new int[n+1];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        int ok = 1;
        for(int i = 0; i < n / 2; i++)
        {
            if(a[i] != a[n-i-1]) 
            {
                ok = 0;
                break;
            }
        }
        if(ok == 1) System.out.println("YES");
        else System.out.println("NO");

    }
}
