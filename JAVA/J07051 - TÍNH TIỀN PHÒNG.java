import java.io.*;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.*;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    static class Khach {
        String ma, ten, phong;
        LocalDate come, go;
        Integer fee, dayStay, tien;

        public Khach() {
        }

        @Override
        public String toString() {
            return String.format("%s %s %s %d %d", ma, ten, phong, dayStay, tien);
        }
    }

    public static void main(String[] args) throws IOException {
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("KHACHHANG.in"));
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        int n = Integer.parseInt(sc.nextLine());
        List<Khach> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            Khach x = new Khach();
            x.ma = String.format("KH%02d", i);
            x.ten = formatTen(sc.nextLine());
            x.phong = sc.nextLine();
            x.come = LocalDate.parse(formatDay(sc.nextLine()),formatter);
            x.go = LocalDate.parse(formatDay(sc.nextLine()),formatter);
            x.fee = Integer.parseInt(sc.nextLine());
            x.dayStay = Math.toIntExact(x.go.toEpochDay() - x.come.toEpochDay()) + 1;
            x.tien = x.fee + calc(x.phong) * x.dayStay;
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<Khach>() {
            @Override
            public int compare(Khach o1, Khach o2) {
                return o2.tien - o1.tien;
            }
        });
        for(Khach k : ls) {
            System.out.println(k);
        }
    }

    public static String formatTen(String ten) {
        String[] s = ten.trim().split("\\s+");
        String ans = "";
        for(String x : s) {
            if(!x.equals(" ")){
                x = x.substring(0, 1).toUpperCase() + x.substring(1).toLowerCase();
                ans += x + " ";
            }
        }
//        System.out.println(ans);
        return ans;
    };

    public static String formatDay(String dateStr) {
        // Tách ngày, tháng, năm
        String[] parts = dateStr.split("/");
        String day = parts[0];
        String month = parts[1];
        String year = parts[2];

        // Đảm bảo ngày và tháng có 2 chữ số
        day = String.format("%02d", Integer.parseInt(day));
        month = String.format("%02d", Integer.parseInt(month));

        // Kết hợp lại thành chuỗi
//        System.out.println(day + "/" + month + "/" + year);
        return day + "/" + month + "/" + year;
    }

    public static Integer calc(String phong) {
        char tang = phong.charAt(0);
        if(tang == '1') return 25;
        else if(tang == '2') return 34;
        else if(tang == '3') return 50;
        else return 80;
    }
}