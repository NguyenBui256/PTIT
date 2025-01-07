import java.util.Scanner;

public class hello {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		int t; t = sc.nextInt();
        while(t-- > 0)
        {
            int n; n = sc.nextInt();
            long sum = (long)n * (long)(n + 1) / 2;
            System.out.println(sum);
        }
	}

}
