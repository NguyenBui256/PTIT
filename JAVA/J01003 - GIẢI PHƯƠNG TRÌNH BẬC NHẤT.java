package oop;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
        int a, b;
        a = scanner.nextInt();
        b = scanner.nextInt();
        if (a == 0 && b == 0) System.out.println("VSN");
        else if (a == 0 && b != 0) System.out.println("VN");
        else {
            System.out.printf("%.2f", 1.0*(-b)/a);
        }
	}

}
