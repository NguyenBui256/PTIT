import java.util.*;
import java.io.*;

public class Hello {
    static class ThiSinh{
        String ma, ten, result;
        double toan,ly,hoa,tong, uutien;

        @Override
        public String toString() {
            return ma + " " + ten + " " + getDUuTien() + " " + getD();
        }

        public String getD() {
            if (tong == (int) tong)
                return Integer.toString((int) tong);
            return Double.toString(tong);
        }
        
        public String getDUuTien() {
            if (uutien == (int) uutien)
                return Integer.toString((int) uutien);
            return Double.toString(uutien);
        }
    }

    static int chitieu;
    static double diemchuan;

    public static void main(String[] args) throws FileNotFoundException {
       Scanner sc = new Scanner(new File("THISINH.in"));
        // Scanner sc = new Scanner(System.in);
        List<ThiSinh> ls = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i <= t; i++) {
            ThiSinh x = new ThiSinh();
            x.ma = sc.nextLine();
            x.uutien = diemuutien(x.ma);
            x.ten = formatTen(sc.nextLine());
            x.toan = Double.parseDouble(sc.nextLine());
            x.ly = Double.parseDouble(sc.nextLine());
            x.hoa = Double.parseDouble(sc.nextLine());
            x.tong = x.toan*2 + x.ly + x.hoa + x.uutien;
            ls.add(x);
        }
        // chitieu = Integer.parseInt(sc.nextLine());
        Collections.sort(ls, new Comparator<ThiSinh>() {
            @Override
            public int compare(ThiSinh o1, ThiSinh o2) {
                if(o2.tong != o1.tong) {
                    return Double.compare(o2.tong, o1.tong);
                }
                return o1.ma.compareTo(o2.ma);
            }
        });
        int chiTieu = sc.nextInt();
        double diemChuan = ls.get(chiTieu - 1).tong;
        System.out.println(diemChuan);
        for (ThiSinh thiSinh : ls) {
            System.out.print(thiSinh);
            if(thiSinh.tong >= diemChuan)
                System.out.println(" TRUNG TUYEN");
            else
                System.out.println(" TRUOT");
        }
        sc.close();
    }

    public static String formatTen(String s) {
        s = s.trim().toLowerCase().replaceAll("\\s+", " ");
        for (int i = 0; i < s.length(); i++) {
            if (i == 0 || s.charAt(i - 1) == ' ') {
                s = s.substring(0, i) + Character.toUpperCase(s.charAt(i)) + s.substring(i + 1);
            }
        }
        return s;
    }

    public static double diemuutien(String ma) {
        if(ma.charAt(2) == '1') return 0.5;
        else if(ma.charAt(2) == '2') return 1.0;
        return 2.5;
    }
}