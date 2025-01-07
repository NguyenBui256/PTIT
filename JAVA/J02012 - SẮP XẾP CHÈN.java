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
            int x = a[i];
            int tmp = i;
            for(int j = 0; j < i; j++)
            {
                if(a[tmp] < a[j]) 
                {
                    tmp = j;
                    break;
                }
            }
            for(int j = i; j >= tmp + 1; j--) a[j] = a[j-1];
            a[tmp] = x;
            System.out.printf("Buoc %d: ", idx++);
            for(int j = 0; j < i + 1; j++) System.out.printf("%d ", a[j]);
            System.out.println();
        }

    }
}
