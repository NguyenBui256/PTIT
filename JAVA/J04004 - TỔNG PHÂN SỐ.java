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
        long a, b, c, d; 
        a = sc.nextLong();
        b = sc.nextLong();
        c = sc.nextLong();
        d = sc.nextLong();
        long tu = 0, mau = 0;
        tu = a*d + c*b;
        mau = b*d;
        long gcd = GCD(tu,mau);
        tu /= gcd;
        mau /= gcd;
        System.out.print(tu); 
        System.out.print("/");
        System.out.print(mau);
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


