import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;
import java.util.*;

class KhachHang{
    String ma,ten,soPhong,ngayDen,ngayDi;
    LocalDate checkIn, checkOut;
    int tien, ngayO, tongTien, donGia;
}
public class Main {

    public static void main(String[] args) throws IOException, ClassNotFoundException, ParseException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        List<KhachHang> ls = new ArrayList<>();
        DateTimeFormatter format = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        for(int i = 1; i <= n; i++) {
            KhachHang x = new KhachHang();
            x.ma = String.format("KH%02d",i);
            x.ten = sc.nextLine();
            x.soPhong = sc.nextLine();
            x.ngayDen = sc.nextLine().trim();
            x.ngayDi = sc.nextLine().trim();
            x.checkIn = LocalDate.parse(x.ngayDen, format);
            x.checkOut = LocalDate.parse(x.ngayDi, format);
            x.ngayO = (int) ChronoUnit.DAYS.between(x.checkIn, x.checkOut) + 1;
            x.tien = Integer.parseInt(sc.nextLine());
            int k = Integer.parseInt(x.soPhong.substring(0,1));
            switch(k) {
                case 1:
                    x.donGia = 25;
                    break;
                case 2:
                    x.donGia = 34;
                    break;
                case 3:
                    x.donGia = 50;
                    break;
                case 4:
                    x.donGia = 80;
                    break;
            }
            x.tongTien = x.donGia * x.ngayO + x.tien;
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<KhachHang>() {
            @Override
            public int compare(KhachHang o1, KhachHang o2) {
                return o2.tongTien - o1.tongTien;
            }
        });
        for(KhachHang x : ls) {
            System.out.printf("%s %s %s %d %d\n", x.ma, x.ten, x.soPhong, x.ngayO, x.tongTien);
        }
    }

    public static double getSpeed(String time) {
        double h = Double.parseDouble(time.substring(0, 1)) - 6;
        double s = Double.parseDouble(time.substring(2, 4)) / 60;
        return (double) 120 / (h + s);
    }

    public static String process(String ten, String dchi){
        String[] adds = dchi.split(" ");
        String[] names = ten.split(" ");
        StringBuilder ans = new StringBuilder();
        for(String x : adds) {
            ans.append(x.substring(0,1));
        }
        for(String x : names) {
            ans.append(x.substring(0,1));
        }
        return ans.toString();
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