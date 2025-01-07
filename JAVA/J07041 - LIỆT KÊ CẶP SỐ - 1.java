Main.java
package test;
import java.io.*;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.*;
import java.lang.Math;

class KH{
    String ma, ten, gender, dob, add;
    Date date;

    @Override
    public String toString() {
        return String.format("%s %s %s %s %s", ma, ten, gender, add, dob);
    }
}

public class Main {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream o = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Pair> a = (ArrayList<Pair>) o.readObject();
        Collections.sort(a);
        HashSet<String> h = new HashSet<>();
        for(Pair i:a){
            if(i.getFirst() < i.getSecond() && !h.contains(i.toString())){
                h.add(i.toString());
                System.out.println(i);
            }
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

Pair.java
package test;
import java.io.*;;

public class Pair implements Serializable, Comparable<Pair>{
    private int first, second;

    public Pair(int first, int second){
        this.first = first;
        this.second = second;
    }
    public int getFirst(){return first;}
    public int getSecond(){return second;}
    public int compareTo(Pair o) {
        return this.first - o.first;
    }

    public String toString(){
        return "(" + first + ", " + second + ")";
    }
}
