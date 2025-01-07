import java.util.*;
import java.math.*;

public class hello {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		int t; t = sc.nextInt();
        while(t-- > 0)
        {
            int n; n = sc.nextInt();
            int ok = 1; 
            for(int i = 2; i <= Math.sqrt(n); i++)
            {
                if(n % i == 0){
                    ok = 0;
                    break;
                }
            }
            if(ok == 1) System.out.println("YES");
            else System.out.println("NO");
        }
	}

}
