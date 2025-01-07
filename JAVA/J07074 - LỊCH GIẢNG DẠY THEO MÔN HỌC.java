Lop.java
public class Lop {
    String maNhom, maMon, giangVien, phong;
    int ngay, kip;

    @Override
    public String toString() {
        return String.format("%s %d %d %s %s", maNhom, ngay, kip, giangVien, phong );
    }
}

Main.java
import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
import java.lang.Math;
public class Main {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        Scanner sc1 = new Scanner(new File("MONHOC.in"));
        Scanner sc2 = new Scanner(new File("LICHGD.in"));
        int t = sc1.nextInt(); sc1.nextLine();
        List<MonHoc> lsMon = new ArrayList<>();
        for(int i = 0; i < t; i++) {
            MonHoc x = new MonHoc();
            x.ma = sc1.nextLine();
            x.ten = sc1.nextLine();
            x.soTin = Integer.parseInt(sc1.nextLine());
            lsMon.add(x);
        }
        List<Lop> lsLop = new ArrayList<>();
        t = sc2.nextInt(); sc2.nextLine();
        for(int i = 1; i <= t; i++) {
            Lop x = new Lop();
            x.maNhom = String.format("HP%03d", i);
            x.maMon = sc2.nextLine();
            x.ngay = Integer.parseInt(sc2.nextLine());
            x.kip = Integer.parseInt(sc2.nextLine());
            x.giangVien = sc2.nextLine();
            x.phong = sc2.nextLine();
            lsLop.add(x);
        }
        String mon = sc2.nextLine();
        String tenMonCanTim = "";
        for(MonHoc monHoc : lsMon) {
            if(monHoc.ma.equals(mon)) {
                tenMonCanTim = monHoc.ten;
            }
        }
        System.out.println("LICH GIANG DAY MON " + tenMonCanTim + ":");
        Collections.sort(lsLop, new Comparator<Lop>() {
            @Override
            public int compare(Lop o1, Lop o2) {
                if(o1.ngay == o2.ngay) {
                    if(o1.kip == o2.kip) {
                        return o1.giangVien.compareTo(o2.giangVien);
                    } else {
                        return o1.kip - o2.kip;
                    }
                }
                return o1.ngay - o2.ngay;
            }
        });
        for(Lop lop : lsLop) {
            if(lop.maMon.equals(mon)) {
                System.out.println(lop);
            }
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

MonHoc.java
public class MonHoc {
    String ma,ten;
    int soTin;
}

