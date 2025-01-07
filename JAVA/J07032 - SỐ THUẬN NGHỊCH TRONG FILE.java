import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
import java.lang.Math;


public class Main {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> ls1 = (ArrayList<Integer>) ois.readObject();
        ArrayList<Integer> ls2 = (ArrayList<Integer>) ois2.readObject();
        int[] mp1 = new int[1000002];
        int[] mp2 = new int[1000002];
        List<Integer> ls = new ArrayList<>();

        for(int x : ls1) {
            if(check(x)) mp1[x]++;
        }for(int x : ls2) {
            if(check(x)) mp2[x]++;
        }
        Collections.sort(ls);
        int k = 1;
        for(int x = 0; x <= 1000000; x++) {
            if(mp1[x] > 0 && mp2[x] > 0) {
                System.out.println(String.format("%d %d", x, mp1[x] + mp2[x]));
                k++;
            }
            if(k == 11) break;
        }

    }

    static boolean check(Integer x) {
        String str = x.toString();
        if(str.length() % 2 == 0 || str.length() == 1) return false;
        for(int i = 0; i <= str.length() / 2; i++) {
            if(str.charAt(i) % 2 == 0 || str.charAt(i) != str.charAt(str.length() - 1 - i)) return false;
        }
        return true;
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