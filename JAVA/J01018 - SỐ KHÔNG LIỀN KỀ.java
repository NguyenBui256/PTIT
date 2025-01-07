import java.util.*;
import java.math.*;

public class hello {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		int t; t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0)
        {
            String s; s = sc.nextLine();
            int n = s.length();
            int sum = 0;
            int ok = 1;
            for(int i = 0; i < n - 1; i++)
            {
                sum += (s.charAt(i) - '0');
                // System.out.println(Math.abs((s.charAt(i) - '0') - (s.charAt(i+1) - '0')));
                if(Math.abs((s.charAt(i) - '0') - (s.charAt(i+1) - '0')) != 2) {
                    ok = 0;
                    break;
                }
            }
            sum += s.charAt(n-1) - '0';
            if(ok == 1 && sum % 10 == 0) System.out.println("YES");
            else System.out.println("NO");
        }
	}

}
