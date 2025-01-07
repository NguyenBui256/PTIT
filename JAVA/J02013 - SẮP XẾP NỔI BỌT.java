import java.util.*;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
    static long[] F;
    static Scanner sc = new Scanner(System.in);
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
        int n; n = sc.nextInt();
        int[] a = new int[n+1];
        for(int i = 0; i < n; i++) a[i] = sc.nextInt();
        int idx = 0;
        for(int i = 0; i < n; i++)
        {
            int ok = 0;
            for(int j = 0; j < n - i - 1; j++)
            {
                if(a[j] > a[j+1]) 
                {
                    int tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                    ok = 1;
                }
            }
            if(ok == 0) break;
            System.out.printf("Buoc %d: ", ++idx);
            for(int j = 0; j < n; j++) System.out.printf("%d ", a[j]);
            System.out.println();
        }

    }
}
