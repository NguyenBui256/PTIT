import java.time.Duration;
import java.time.LocalDate;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;
import java.util.*;


class SinhVien{
    String ma, ten;
    float toan, ly, hoa, uuTien, tong;
}
public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        List<SinhVien> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            sc.nextLine();
            SinhVien x = new SinhVien();
            x.ma = sc.nextLine();
            x.ten = sc.nextLine();
            x.toan = sc.nextFloat();
            x.ly = sc.nextFloat();
            x.hoa = sc.nextFloat();
            String kv = x.ma.substring(2,3);
//            System.out.println(kv);
            if(kv.equals("1")) {
                x.uuTien = 0.5f;
            } else if(kv.equals("2")) {
                x.uuTien = 1f;
            } else {
                x.uuTien = 2.5f;
            }
            x.tong = 2*x.toan + x.ly + x.hoa + x.uuTien;
            ls.add(x);
        }
        int k = sc.nextInt();
        float diemChuan = 0;
        Collections.sort(ls, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                if(o1.tong != o2.tong) {
                    return Float.compare(o2.tong, o1.tong);
                }
                return o1.ma.compareTo(o2.ma);
            }
        });
        diemChuan = ls.get(k-1).tong;
        System.out.println(String.format("%.1f", diemChuan));
        for(SinhVien x : ls) {
            System.out.print(x.ma + " " + x.ten + " " + xuLyFloat(x.uuTien) + " " + xuLyFloat(x.tong) + " ");
            if(x.tong >= diemChuan) {
                System.out.println("TRUNG TUYEN");
            } else {
                System.out.println("TRUOT");
            }
        }
    }

    public static String xuLyFloat(float x) {
        if(x == (int)x) {
            return String.format("%d", (int)x);
        } else {
            return String.format("%.1f", x);
        }
    }
}