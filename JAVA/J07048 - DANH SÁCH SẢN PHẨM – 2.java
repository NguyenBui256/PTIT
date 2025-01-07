SanPham.java
public class SanPham {
    String ma, ten;
    Integer ban, bh;

    SanPham() {

    }

    @Override
    public String toString() {
        return String.format("%s %s %d %d", ma, ten, ban, bh);
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
//        Scanner sc = new Scanner(System.in);
        Scanner sc = new Scanner(new File("SANPHAM.in"));
        int n = Integer.parseInt(sc.nextLine());
        List<SanPham> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            SanPham x = new SanPham();
            x.ma = sc.nextLine();
            x.ten = sc.nextLine();
            x.ban = Integer.parseInt(sc.nextLine());
            x.bh = Integer.parseInt(sc.nextLine());
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<SanPham>() {
            @Override
            public int compare(SanPham o1, SanPham o2) {
                if(o1.ban != o2.ban) {
                    return  o2.ban - o1.ban;
                }
                return o1.ma.compareTo(o2.ma);
            }
        });
        for(SanPham x : ls) {
            System.out.println(x);
        }
    }
}
