import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
import java.lang.Math;

class SinhVien{
    String ma,ten,lop,dob;
    float gpa;
}
public class Main {

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); sc.nextLine();
        List<SinhVien> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            SinhVien x = new SinhVien();
            x.ma = String.format("B20DCCN%03d", i);
            x.ten = chTen(sc.nextLine());
            x.lop = sc.nextLine();
            x.dob = chNgay(sc.nextLine());
            x.gpa = Float.parseFloat(sc.nextLine());
            System.out.println(x.ma + " " + x.ten + " " + x.lop + " " + x.dob + " " + String.format("%.2f",x.gpa));
        }
    }

    public static String chTen(String s) {
        s = s.trim().toLowerCase().replaceAll("\\s+", " ");
        for (int i = 0; i < s.length(); i++) {
            if (i == 0 || s.charAt(i - 1) == ' ') {
                s = s.substring(0, i) + Character.toUpperCase(s.charAt(i)) + s.substring(i + 1);
            }
        }
        return s;
    }

    public static String chNgay(String input) {
        String[] ls = input.split("/");
        return String.format("%02d/%02d/%d", Integer.parseInt(ls[0]), Integer.parseInt(ls[1]), Integer.parseInt(ls[2]));
    }
}
