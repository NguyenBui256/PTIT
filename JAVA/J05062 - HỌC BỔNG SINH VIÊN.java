import java.time.Duration;
import java.time.LocalDate;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;
import java.util.*;


class SinhVien{
    String ten, ketQua;
    float gpa;
    int drl;
}
public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        List<SinhVien> ls = new ArrayList<>();
        List<SinhVien> ls2 = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            sc.nextLine();
            SinhVien x = new SinhVien();
            x.ten = sc.nextLine();
            x.gpa = sc.nextFloat();
            x.drl = sc.nextInt();
            ls.add(x);
            ls2.add(x);
        }
        Collections.sort(ls, new Comparator<SinhVien>() {
            @Override
            public int compare(SinhVien o1, SinhVien o2) {
                if(o1.gpa == o2.gpa) {
                    return o2.drl - o1.drl;
                }
                return Float.compare(o2.gpa, o1.gpa);
            }
        });
        float diemChuan = ls.get(m-1).gpa;
//        System.out.println(diemChuan);
        for(SinhVien x : ls2) {
            if(x.gpa < diemChuan) {
                x.ketQua = "KHONG";
            } else {
                if(x.gpa >= 3.6 && x.drl >= 90) {
                    x.ketQua = "XUATSAC";
                } else if(x.gpa >= 3.2 && x.drl >= 80) {
                    x.ketQua = "GIOI";
                } else if(x.gpa >= 2.5 && x.drl >= 70) {
                    x.ketQua = "KHA";
                } else {
                    x.ketQua = "KHONG";
                }
            }
            System.out.println(x.ten + ": " + x.ketQua);
        }
    }
}