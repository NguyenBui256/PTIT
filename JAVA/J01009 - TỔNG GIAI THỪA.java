import java.util.*;
import java.math.*;

public class hello {

	public static void main(String[] args) {
      
        Scanner sc = new Scanner(System.in);
		
            int n; n = sc.nextInt();
            long sum = 1;
            long tich = 1;
            for(int i = 2; i <= n; i++)
            {
                tich *= i;
                sum += tich;
            }
            System.out.println(sum);
	}

}
