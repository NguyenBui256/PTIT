import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;

public class Main {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("SV.in"));
        int t = 1;
        t = sc.nextInt();
        for(int i = 1; i <= t; i++) {
            sc.nextLine();
            String id = "B20DCCN";
            if (i < 10) id += "00";
            else if(i < 100) id += "0";
            id += Integer.toString(i);
            String ten = sc.nextLine(), lop = sc.nextLine(), dob = sc.nextLine();
            double gpa = sc.nextDouble();
            if(dob.charAt(2) != '/') dob = "0" + dob;
            if(dob.charAt(5) != '/') dob = dob.substring(0, 3) + "0" + dob.substring(3);
            System.out.println(id + " " + ten + " " + lop + " " + dob + " " + String.format("%.2f", gpa));

        }
        sc.close();
    }

    
}