import java.io.*;
import java.util.*;
import java.lang.Math;

public class Main {

    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> ls = (ArrayList<Integer>) ois.readObject();
        ArrayList<Integer> ls2 = (ArrayList<Integer>) ois2.readObject();
        Map<Integer,Integer> mp = new HashMap<>();
        Map<Integer,Integer> mp2 = new HashMap<>();
        for(Integer i : ls) {
            mp.put(i,mp.getOrDefault(i,0) + 1);
        }
        for(Integer i : ls2) {
            mp2.put(i, mp2.getOrDefault(i,0) + 1);
        }
        for(int i = 2; i <= 10000; i++) {
            if(tn(i) && check(i) && mp.getOrDefault(i,0) > 0 && mp2.getOrDefault(i,0) > 0) {
                System.out.printf("%d %d %d\n", i , mp.get(i), mp2.get(i));
            }
        }

    }

    public static boolean check(int n){
        if(n < 2) return false;
        for(int i = 2; i <= (int)(Math.sqrt(n)); i++) {
            if(n % i == 0) return false;
        }
        return true;
    }

    public static boolean tn(Integer n) {
        String s = n.toString();
        for(int i = 0; i < s.length() / 2; i++) {
            if(s.charAt(i) != s.charAt(s.length() - 1 - i)) return false;
        }
        return true;
    }
}