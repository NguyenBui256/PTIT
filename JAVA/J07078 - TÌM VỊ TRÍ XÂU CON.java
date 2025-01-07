import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
import java.lang.Math;
public class Main {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        Scanner sc = new Scanner(new File("STRING.in"));
        int t = sc.nextInt(); sc.nextLine();
        for(int j = 0; j < t; j++) {
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            List<Integer> positions = new ArrayList<>();
            for (int i = 0; i <= s1.length() - s2.length(); i++) {
                if (s1.startsWith(s2, i)) {
                    positions.add(i);
                }
            }
            for(int x : positions) System.out.print(x + 1 + " ");
            System.out.println();
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