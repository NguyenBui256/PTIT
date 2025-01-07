import java.util.*;
import java.math.*;

public class hello {

	public static void main(String[] args) {
        Long[] a = new Long[100];
        a[0] = (long)0; a[1] = (long)1;
        for(int i = 2; i <= 92; i++)
        {
            a[i] = a[i-1] + a[i-2];
        }
        Scanner sc = new Scanner(System.in);
		int t; t = sc.nextInt();
        while(t-- > 0)
        {
            int n; n = sc.nextInt();
            System.out.println(a[n]);
        }
	}

}