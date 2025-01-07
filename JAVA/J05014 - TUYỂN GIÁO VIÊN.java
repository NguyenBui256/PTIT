import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
import java.lang.Math;

class GiaoVien {
    String ma, ten, mon, ketQua, code, gpa;
    double uuTien, tin, cm, tong;
}
public class Main {

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        List<GiaoVien> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            GiaoVien x = new GiaoVien();
            x.ma = String.format("GV%02d", i);
            x.ten = chTen(sc.nextLine());
            x.code = sc.nextLine();
//            System.out.println(x.code.charAt(0));
            if(x.code.charAt(0) == 'A') {
                x.mon = "TOAN";
            } else if(x.code.charAt(0) == 'B') {
                x.mon = "LY";
            } else x.mon = "HOA";
            if(x.code.charAt(1) == '1') {
                x.uuTien = 2.0f;
            } else if(x.code.charAt(1) == '2') {
                x.uuTien = 1.5f;
            } else if(x.code.charAt(1) == '3') {
                x.uuTien = 1.0f;
            } else x.uuTien = 0;
            x.tin = Double.parseDouble(sc.nextLine());
            x.cm = Double.parseDouble(sc.nextLine());
            x.tong = x.tin * 2 + x.cm + x.uuTien;
            x.gpa =String.format("%.1f", x.tong);
            if(x.tong >= 18) {
                x.ketQua = "TRUNG TUYEN";
            } else x.ketQua = "LOAI";
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<GiaoVien>() {
            @Override
            public int compare(GiaoVien o1, GiaoVien o2) {
                if(o1.tong == o2.tong) {
                    return o1.ma.compareTo(o2.ma);
                }
                return o1.tong < o2.tong ? 1 : -1;
            }
        });
        for(GiaoVien x : ls) {
            System.out.printf("%s %s %s %s %s\n", x.ma, x.ten, x.mon, x.gpa, x.ketQua);
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