import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.*;

public class Hello {
    static class MonHoc {
        String ten;
        long phut;
        Date in,out;

        @Override
        public String toString() {
            return ten + " " + phut;
        }
    }



    public static void main(String[] args) throws FileNotFoundException, ParseException {
        Scanner sc = new Scanner(new File("ONLINE.in"));
        // Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        List<MonHoc> ls = new ArrayList<>();
        SimpleDateFormat format = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
        for(int i = 1; i<= t; i++) {
            MonHoc x = new MonHoc();
            x.ten = sc.nextLine();
            x.in = format.parse(sc.nextLine());
            x.out = format.parse(sc.nextLine());
            x.phut = (x.out.getTime() - x.in.getTime()) / (60 * 1000);
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<MonHoc>() {
            @Override
            public int compare(MonHoc o1, MonHoc o2) {
                if(o1.phut != o2.phut) {
                    return Long.compare(o2.phut, o1.phut);
                } 
                return o1.ten.compareTo(o2.ten);
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