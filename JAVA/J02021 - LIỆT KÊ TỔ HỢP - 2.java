import java.util.*;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
    static int[] X = new int[20];
    static int n, k, cnt = 0;
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
        Try(1);
        System.out.println();
        System.out.printf("Tong cong co %d to hop", cnt);
    }
    
    public static void Try(int i)
    {
        for(int j = X[i-1] + 1; j <= n - k + i; j++)
        {
            X[i] = j;
            if(i == k) in();
            else {
                Try(i+1);
            }
        }
    }
    
    public static void in()
    {
        for(int i = 1; i <= k; i++) System.out.printf("%d", X[i]);
        System.out.printf(" ");
        cnt++;
    }
}
