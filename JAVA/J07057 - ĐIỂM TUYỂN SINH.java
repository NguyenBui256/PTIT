import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class Hello {
    static class ThiSinh {
        String ma, ten, dantoc, result;
        Float diem, uutien;
        int khuvuc;

        @Override
        public String toString() {
            return String.format("%s %s %.1f %s", ma,ten,diem,result);
        }
    }


    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("THISINH.in"));
        // Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        List<ThiSinh> ls = new ArrayList<>();
        for(int i = 1; i <= n; i++) {
            ThiSinh x = new ThiSinh();
            x.ma = String.format("TS%02d", i);
            x.ten = formatTen(sc.nextLine());
            x.diem = Float.parseFloat(sc.nextLine());
            x.dantoc = sc.nextLine();
            x.khuvuc = Integer.parseInt(sc.nextLine());
            if(x.khuvuc == 1) {
                x.uutien = 1.5f;
            } else if(x.khuvuc == 2) {
                x.uutien = 1f;
            } else {
                x.uutien = 0f;
            }
            if(!x.dantoc.equals("Kinh")) {
                x.uutien += 1.5f;
            }
            x.diem += x.uutien;
            if(x.diem >= 20.5) {
                x.result = "Do";
            } else {
                x.result = "Truot";
            }
            ls.add(x);
        }
        Collections.sort(ls, new Comparator<ThiSinh>() {
            @Override
            public int compare(ThiSinh o1, ThiSinh o2) {
                return Float.compare(o2.diem, o1.diem);
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