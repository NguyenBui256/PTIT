import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
import java.lang.Math;

class SinhVien {
    String ma, ten, ketQua;
    float b1, b2, gpa;
}
public class Main {

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        List<SinhVien> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            SinhVien x = new SinhVien();
            x.ma = String.format("TS%02d", i);
            x.ten = sc.nextLine();
            x.b1 = Float.parseFloat(sc.nextLine());
            if(x.b1 > 10) x.b1 /= 10;
            x.b2 = Float.parseFloat(sc.nextLine());
            if(x.b2 > 10) x.b2 /= 10;
            x.gpa = (x.b1+x.b2)/2;
            if(x.gpa < 5) {
                x.ketQua = "TRUOT";
            } else if(x.gpa < 8) {
                x.ketQua = "CAN NHAC";
            } else if(x.gpa <= 9.5) {
                x.ketQua = "DAT";
            } else {
                x.ketQua = "XUAT SAC";
            }
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                return Float.compare(o2.gpa, o1.gpa);
            }
        });
        for(SinhVien x : ls) {
            System.out.printf("%s %s %.2f %s\n", x.ma, x.ten, x.gpa, x.ketQua);
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