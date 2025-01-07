import java.util.*;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
    static long[] F;
	public static void main(String[] args) {
        F = new long[100];
        F[1] = 1; F[2] = 1;
        for(int i = 3; i < 93; i++)
        {
            F[i] = F[i-1] + F[i-2];
            // System.out.println(F[i]);
        }
        Scanner sc = new Scanner(System.in);
		int t; t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0)
        {
            long n; n = sc.nextLong();
            int ok = 1;
            while(n > 0)
            {
                if(n % 10 != 1 && n % 10 != 2 && n % 10 != 0) {
                    ok = 0;
                    break;
                }
                n /= 10;
            }
            if(ok == 1) System.out.println("YES");
            else System.out.println("NO");
        }
	}

}
