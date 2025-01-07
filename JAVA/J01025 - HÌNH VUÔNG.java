import java.util.*;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
    static long[] F;
    static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		int t = 1; 
        // t = sc.nextInt();
        // sc.nextLine();
        // while(t-- > 0)
        {
            solve();
        }
	}
    
    public static void solve()
    {
        int xA, xB, xC, xD, yA, yB, yC, yD; 
        int ngangMax, ngangMin, docMax, docMin;
        xA = sc.nextInt(); yA = sc.nextInt();
        xB = sc.nextInt(); yB = sc.nextInt();
        xC = sc.nextInt(); yC = sc.nextInt();
        xD = sc.nextInt(); yD = sc.nextInt();
        ngangMax = Math.max(xA, Math.max(xB, Math.max(xC, xD)));
        ngangMin = Math.min(xA, Math.min(xB, Math.min(xC, xD)));
        docMax = Math.max(yA, Math.max(yB, Math.max(yC, yD)));
        docMin = Math.min(yA, Math.min(yB, Math.min(yC, yD)));
        int d = Math.max(ngangMax - ngangMin, docMax - docMin);
        System.out.println(d*d);
    }
}
