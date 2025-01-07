import java.util.*;
import java.math.*;

public class hello {

	public static void main(String[] args) {
        int[] a = new int[2000005];
        int[] nt = new int[2000005];
        int[] sum = new int[2000005];
        a[0] = a[1] = 1;
        for(int i = 2; i * i <= 2000001; i++)
        {
            if(a[i] == 0)
            {
                for(int j = i * i; j <= 2000001; j += i)
                {
                    a[j] = 1;
                }
            }
        }
        nt[1] = 2;
        sum[2] = 2;
        int x = 2;
        for(int i = 3; i <= 2000001; i += 2)
        {
            if(a[i] == 0)
            {
                nt[x] = i;
                sum[i] = i; 
                ++x;
            }
        }
        for(int i = 2; i <= 2000001; i++)
        {
            int k = i;
            for(int j = 1; j < x; j++)
            {
                if(nt[j] * nt[j] > i)
                {
                    break;
                } 
                if(i % nt[j] == 0)
                {
                    sum[i] = sum[i/nt[j]] + sum[nt[j]];
                    break;
                }
            }
        }
        Scanner sc = new Scanner(System.in);
        long ans = 0;
		int t; t = sc.nextInt();
        while(t-- > 0)
        {
            int n; n = sc.nextInt();
            ans += sum[n];
        }
        System.out.println(ans);
	}

}
