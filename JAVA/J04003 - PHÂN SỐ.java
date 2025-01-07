import java.util.*;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
    static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		int t = 1; 
        // t = sc.nextInt();
        // sc.nextLine();
        while(t-- > 0)
        {
            solve();
        }
	}
    
    public static void solve()
    {
        long a, b; 
        a = sc.nextLong();
        b = sc.nextLong();
        long gcd = GCD(a,b);
        a /= gcd;
        b /= gcd;
        System.out.print(a); 
        System.out.print("/");
        System.out.print(b);
    }

    public static long GCD(long a, long b)
    {
        while(b > 0)
        {
            long r = a % b;
            a = b;
            b = r;
        }
        return a;
    }
    
}


