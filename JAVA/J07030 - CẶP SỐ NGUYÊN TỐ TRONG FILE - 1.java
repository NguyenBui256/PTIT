import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
import java.lang.Math;


public class Main {

    static int[] a = new int[1000003];

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        sang();
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> ls1 = (ArrayList<Integer>) ois.readObject();
        ArrayList<Integer> ls2 = (ArrayList<Integer>) ois2.readObject();
        int[] mp1 = new int[1000002];
        int[] mp2 = new int[1000002];

        for(int x : ls1) {
            if(a[x] == 0) mp1[x]++;
        }for(int x : ls2) {
            if(a[x] == 0) mp2[x]++;
        }
        for(int i = 2; i <= 1000000/2; i++) {
            if(a[i] == 0 && a[1000000-i] == 0 && mp1[i] > 0 && mp2[1000000-i] > 0) {
                System.out.println(i + " " + (1000000-i));
            }
        }

    }

    static void sang(){
        a[0] = 1;
        a[1] = 1;
        for(int i = 2; i <= 1000; i++) {
            if(a[i] == 0) {
                for(int j = i * i; j <= 1000001; j += i) {
                    a[j] = 1;
                }
            }
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