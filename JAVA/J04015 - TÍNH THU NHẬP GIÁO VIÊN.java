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
        String bac, ten;
        long tien;
        bac = sc.nextLine();
        ten = sc.nextLine();
        tien = sc.nextLong();
        int bacLuong = (bac.charAt(2) - '0') * 10 + bac.charAt(3) - '0';
        int phucap = 0;
        char x = bac.charAt(0), y = bac.charAt(1);
        if(x == 'H' && y == 'T') phucap = 2000000;
        else if(x == 'H' && y == 'P') phucap = 900000;
        else phucap = 500000;
        System.out.printf("%s %s %d %d %d", bac, ten, bacLuong, phucap, tien * bacLuong + phucap);
    }
    
}


