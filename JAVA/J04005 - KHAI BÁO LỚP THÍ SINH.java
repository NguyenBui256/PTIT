import java.util.*;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
    static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		int t = 1; 
        // t = sc.nextInt();
        // sc.nextLine();
        while(t-- > 0)
        {
            solve();
        }
	}
    
    public static void solve()
    {
        String ten, ngaysinh;
        double a,b,c; 
        ten = sc.nextLine();
        ngaysinh = sc.nextLine();
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        System.out.printf("%s %s %.1f", ten, ngaysinh, a + b + c); 
    }
    
}


