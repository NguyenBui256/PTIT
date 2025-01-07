import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = 1;
        // t = sc.nextInt();
        // sc.nextLine();
        while(t-- > 0) {
            String ten = sc.nextLine(), lop = sc.nextLine(), dob = sc.nextLine();
            double gpa = sc.nextDouble();
            if(dob.charAt(2) != '/') dob = "0" + dob;
            if(dob.charAt(5) != '/') dob = dob.substring(0, 3) + "0" + dob.substring(3);
            System.out.println("B20DCCN001 " + ten + " " + lop + " " + dob + " " + String.format("%.2f", gpa));

        }
        sc.close();
    }

    
}