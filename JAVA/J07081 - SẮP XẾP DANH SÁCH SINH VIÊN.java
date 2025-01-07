import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.*;

public class Hello {
    static class MonHoc {
        String ma, ten, ho, dem, sdt, mail;

        @Override
        public String toString() {
            return ma + " " + ho + " " + dem + " " + ten + " " + sdt + " " + mail;
        }
    }



    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner sc = new Scanner(new File("SINHVIEN.in"));
        // Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        List<MonHoc> ls = new ArrayList<>();
        for(int i = 1; i<= t; i++) {
            MonHoc x = new MonHoc();
            x.ma = sc.nextLine();
            String[] ten = sc.nextLine().split(" ");
            x.ten = ten[ten.length-1];
            x.ho = ten[0];
            x.dem = "";
            for(int j = 1; j < ten.length - 1; j++) {
                x.dem += ten[j];
                if(j != ten.length - 2) {
                    x.dem += " ";
                }
            }
            x.sdt = sc.nextLine();
            x.mail = sc.nextLine();
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<MonHoc>() {
            @Override
            public int compare(MonHoc o1, MonHoc o2) {
                if(o1.ten.compareTo(o2.ten) != 0) return o1.ten.compareTo(o2.ten);
                if(o1.ho.compareTo(o2.ho) != 0) return o1.ho.compareTo(o2.ho);
                if(o1.dem.compareTo(o2.dem) != 0) return o1.dem.compareTo(o2.dem);
                return o1.ma.compareTo(o2.ma);
            }
        });
        for(MonHoc x : ls) {
            System.out.println(x);
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
        return ans.trim();
    };

    public static double diemuutien(String ma) {
        if(ma.charAt(2) == '1') return 0.5;
        else if(ma.charAt(2) == '2') return 1.0;
        return 2.5;
    }
}