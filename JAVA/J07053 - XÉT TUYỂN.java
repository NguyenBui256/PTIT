import java.util.*;
import java.io.*;

public class Hello {
    static class ThiSinh{
        String ma, ten, dob;
        float lt, th, bonus;
        int tuoi, diem;

        public float getBonus() {
            if(lt >= 8 && th >= 8) {
                return 1f;
            } else if(lt >= 7.5 && th >= 7.5) {
                return 0.5f;
            }
            return 0;
        }

        public String getResult() {
            if(diem < 5) return "Truot";
            else if(diem < 7) return "Trung binh";
            else if(diem == 7) return "Kha";
            else if(diem == 8) return "Gioi";
            return "Xuat sac";
        }

        @Override
        public String toString() {
            return ma + " " + ten + " " + tuoi + " " + diem + " " + getResult();
        }
    }

    static int chitieu;
    static double diemchuan;

    public static void main(String[] args) throws FileNotFoundException {
       Scanner sc = new Scanner(new File("XETTUYEN.in"));
        // Scanner sc = new Scanner(System.in);
        List<ThiSinh> ls = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i <= t; i++) {
            ThiSinh x = new ThiSinh();
            x.ma = String.format("PH%02d", i);
            x.ten = formatTen(sc.nextLine());
            x.dob = sc.nextLine();
            x.lt = Float.parseFloat(sc.nextLine());
            x.th = Float.parseFloat(sc.nextLine());
            x.diem = Math.round((x.lt + x.th) / 2 + x.getBonus());
            if(x.diem > 10) x.diem = 10;
            String[] s = x.dob.split("/");
            x.tuoi = 2021 - Integer.parseInt(s[2]);
            ls.add(x);
        }
        for(ThiSinh thiSinh : ls){
            System.out.println(thiSinh);
        }
        sc.close();
    }

    public static String formatTen(String s) {
        s = s.trim().toLowerCase().replaceAll("\\s+", " ");
        for (int i = 0; i < s.length(); i++) {
            if (i == 0 || s.charAt(i - 1) == ' ') {
                s = s.substring(0, i) + Character.toUpperCase(s.charAt(i)) + s.substring(i + 1);
            }
        }
        return s;
    }

    public static double diemuutien(String ma) {
        if(ma.charAt(2) == '1') return 0.5;
        else if(ma.charAt(2) == '2') return 1.0;
        return 2.5;
    }
}