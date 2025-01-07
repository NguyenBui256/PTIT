import java.util.*;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		// int t; t = sc.nextInt();
        // sc.nextLine();
        while(sc.hasNext())
        {
            long a, b; 
            a = sc.nextLong();
            b = sc.nextLong();
            if(a == 0 && b == 0) return;
            System.out.println(luythua(a,b));
        }
	}

    public static long luythua(long a, long b)
    {
        if(b == 0) return 1;
        long tmp = luythua(a,b/2);
        if(b % 2 == 0) return (tmp % MOD * tmp % MOD) % MOD;
        return ((tmp % MOD * tmp % MOD) % MOD * a % MOD) % MOD;
    }

}
