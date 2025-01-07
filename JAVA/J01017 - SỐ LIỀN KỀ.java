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
            int ok = 1;
            for(int i = 0; i < n - 1; i++)
            {
                // System.out.println(Math.abs((s.charAt(i) - '0') - (s.charAt(i+1) - '0')));
                if(Math.abs((s.charAt(i) - '0') - (s.charAt(i+1) - '0')) != 1) {
                    ok = 0;
                    break;
                }
            }
            if(ok == 1) System.out.println("YES");
            else System.out.println("NO");
        }
	}

}
