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
            long a, b; 
            a = sc.nextLong();
            b = sc.nextLong();
            System.out.println(find(a,b));
        }
	}

    public static long find(long n, long k)
    {
        if(n == 1) return 0;
        if(n == 2) return 1;
        if(k <= F[(int)n-2]) return find(n-2,k);
        else return find(n-1,k - F[(int)n-2]);
    }

}
