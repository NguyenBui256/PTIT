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
        t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0)
        {
            solve();
        }
	}
    
    public static void solve()
    {
        String s;
        s = sc.nextLine();
        int ok = 0;
        int n = s.length();
        for(int i = 0; i < n / 2; i++)
        {
            if(((s.charAt(0) - '0') % 2) != 0 || (s.charAt(i) != s.charAt(n-i-1)))
            {
                ok = 1;
                break;
            }
        }
        if(ok == 0) System.out.println("YES");
        else System.out.println("NO");
    }
    
}
