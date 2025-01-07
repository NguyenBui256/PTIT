import java.util.*;
import java.math.*;

public class hello {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		int t; t = sc.nextInt();
        while(t-- > 0)
        {
            int a, b; 
            a = sc.nextInt(); 
            b = sc.nextInt();
            long tich = (long)a * (long)b;
            while(b != 0)
            {
                int r = a % b;
                a = b;
                b = r;
            }
            System.out.println(tich / a + " " + a);
        }
	}

}
