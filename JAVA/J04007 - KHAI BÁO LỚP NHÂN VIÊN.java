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
        String ten, ngaysinh, lop, gioi, diachi, mst, kihopdong;
        ten = sc.nextLine();
        gioi = sc.nextLine();
        ngaysinh = sc.nextLine();
        diachi = sc.nextLine();
        mst = sc.nextLine();
        kihopdong = sc.nextLine();
        System.out.printf("00001 %s %s %s %s %s %s", ten, gioi, ngaysinh, diachi, mst, kihopdong); 
    }
    
}


