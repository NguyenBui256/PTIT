import java.util.Scanner;

public class hello {

	public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		int a, b; 
        a = sc.nextInt();
        b = sc.nextInt();
        if(a <= 0 || b <= 0) 
        {
            System.out.println(0);
        }else System.out.println(2*(a+b) + " " + a*b);
	}

}
