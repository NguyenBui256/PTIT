import java.util.*;
import java.math.*;

public class hello {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		int t; t = sc.nextInt();
        while(t-- > 0)
        {
            long n; n = sc.nextLong();
            long ans = 0;
            for(int i = 2; i <= Math.sqrt(n); i++)
            {
                if(n % i == 0)
                {
                    if(i > ans) ans = i;
                    while(n % i == 0) 
                    {
                        n /= i;
                    }
                }
            }
            if(n != 1 && n > ans) ans = n;
            System.out.println(ans);
        }
	}

}
