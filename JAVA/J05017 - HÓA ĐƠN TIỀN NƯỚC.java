import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;
import java.util.*;

class KhachHang{
    String ma,ten;
    int cu, moi, tong;
}
public class Main {

    public static void main(String[] args) throws IOException, ClassNotFoundException, ParseException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        List<KhachHang> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            KhachHang x = new KhachHang();
            x.ma = String.format("KH%02d",i);
            x.ten = sc.nextLine();
            x.cu = Integer.parseInt(sc.nextLine());
            x.moi = Integer.parseInt(sc.nextLine());
            x.tong = (int)Math.ceil(getAmount(x.moi-x.cu));
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<KhachHang>() {
            @Override
            public int compare(KhachHang o1, KhachHang o2) {
                if(o2.tong == o1.tong) {
                    return o1.ma.compareTo(o2.ma);
                }
                return o1.tong < o2.tong ? 1 : -1;
            }
        });
        for(KhachHang x : ls) {
            System.out.println(x.ma + " " + x.ten + " " + x.tong);
        }
    }

    public static double getAmount(int n) {
        if (n <= 50) {
            return n * 102;
        }
        if (n <= 100) {
            return (50 * 100 + (n - 50) * 150) * 1.03;
        }
        return (50 * 100 + 50 * 150 + (n - 100) * 200) * 1.05;
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