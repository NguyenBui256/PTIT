KhachHang.java
import java.time.LocalDate;

public class KhachHang implements Comparable {
    String ma, ten, maPhong;
    LocalDate come, go;
    int day;
    KhachHang() {

    }

    @Override
    public int compareTo(Object o) {
        return 0;
    }

    public int calc(LocalDate come, LocalDate go) {
        return (int) (go.toEpochDay() - come.toEpochDay());
    }

    @Override
    public String toString() {
        return String.format("%s %s %s %d", ma, ten, maPhong, day);
    }
}
Main.java
import java.io.*;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.*;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    static Integer k = 1;

    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("KHACH.in"));
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        List<KhachHang> ls = new ArrayList<>();
        int n = Integer.parseInt(sc.nextLine());
        for(int i = 1; i <= n; i++) {
            KhachHang kh = new KhachHang();
            kh.ma = String.format("KH%02d", i);
            kh.ten = sc.nextLine();
            kh.maPhong = sc.nextLine();
            kh.come = LocalDate.parse(sc.nextLine(),formatter);
            kh.go = LocalDate.parse(sc.nextLine(),formatter);
            kh.day = kh.calc(kh.come, kh.go);
            ls.add(kh);
        }
        Collections.sort(ls, new Comparator<KhachHang>() {
            @Override
            public int compare(KhachHang o1, KhachHang o2) {
                return o2.day - o1.day;
            }
        });
        for(KhachHang kh : ls) {
            System.out.println(kh);
        }
    }
}
