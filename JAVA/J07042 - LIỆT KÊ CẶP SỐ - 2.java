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
        for (Pair i : a) {
            if (i.getFirst() < i.getSecond() && findGCD(i.getFirst(), i.getSecond()) == 1 && !h.contains(i.toString())) {
                h.add(i.toString());
                System.out.println(i);
            }
        }
    }
    public static int findGCD(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

}
