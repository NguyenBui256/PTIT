import java.util.*;
import java.math.*;

public class hello {

	public static void main(String[] args) {
        // Long[] a = new Long[100];
        // a[0] = (long)0; a[1] = (long)1;
        // for(int i = 2; i <= 92; i++)
        // {
        //     a[i] = a[i-1] + a[i-2];
        // }
        Scanner sc = new Scanner(System.in);
		int t; t = sc.nextInt();
        int x = 1;
        while(x <= t)
        {
            System.out.printf("Test " + x + ": ");
            x++;
            long n; n = sc.nextLong();
            for(int i = 2; i <= Math.sqrt(n); i++)
            {
                if(n % i == 0)
                {
                    int cnt = 0;
                    while(n % i == 0){
                        cnt++;
                        n /= i;
                    }
                    if(cnt != 0) System.out.printf("%d(%d) ", i,cnt);
                }
            }
            if(n != 1) System.out.printf("%d(1)",n);
            System.out.println();
        }
	}

}
