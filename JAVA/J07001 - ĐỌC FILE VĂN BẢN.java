import java.util.*;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.math.*;

public class hello {

    static int MOD = 1000000007;
    static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) throws IOException, ClassNotFoundException {
		int t = 1; 
        // t = sc.nextInt();
        // sc.nextLine();
        while(t-- > 0)
        {
            solve();
        }
	}
    
    public static void solve() throws IOException, ClassNotFoundException
    {
        FileInputStream fis = new FileInputStream("DATA.in");
        Scanner scann = new Scanner(fis);
        while(scann.hasNextLine())
        {
            System.out.println(scann.nextLine());
        }
    }
    
}


