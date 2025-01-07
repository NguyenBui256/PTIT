import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;
import java.util.*;
import java.util.Vector;
import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;


public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("VANBAN.in"));
        Map<String,Integer> mp = new HashMap<String,Integer>();
        Vector<String> v = new Vector<>();
        while(sc.hasNext())
        {
            String s = sc.next();
            s = s.toLowerCase();
            if(mp.getOrDefault(s,0) == 0){
                v.add(s);
            }
            mp.put(s,mp.getOrDefault(s,0) + 1);
        }
        v.sort(null);
        for(String i : v) System.out.println(i);

    }
}