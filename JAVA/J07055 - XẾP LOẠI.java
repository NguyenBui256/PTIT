import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class Hello {
    static class ThiSinh{
        String ma, ten, xepLoai;
        Float lt, th, thi, tong;
        int rank;

        @Override
        public String toString() {
            return String.format("%s %s %.2f %s", ma,ten,tong, xepLoai);
        }
    }


    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("BANGDIEM.in"));
        // Scanner sc = new Scanner(System.in);
        List<ThiSinh> ls = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i <= t; i++) {
            ThiSinh x = new ThiSinh();
            x.ma = String.format("SV%02d",i);
            x.ten = formatTen(sc.nextLine());
            x.lt = Float.parseFloat(sc.nextLine());
            x.th = Float.parseFloat(sc.nextLine());
            x.thi = Float.parseFloat(sc.nextLine());
            x.tong = (x.lt * 0.25f + x.th * 0.35f + x.thi * 0.4f);
            if(x.tong >= 8) {
                x.xepLoai = "GIOI";
            } else if(x.tong >= 6.5) {
                x.xepLoai = "KHA";
            } else if(x.tong >= 5) {
                x.xepLoai = "TRUNG BINH";
            } else {
                x.xepLoai = "KEM";
            }
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<ThiSinh>() {
            @Override
            public int compare(ThiSinh o1, ThiSinh o2) {
                return Float.compare(o2.tong,o1.tong);
            }
        });
        for(ThiSinh x : ls) {
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