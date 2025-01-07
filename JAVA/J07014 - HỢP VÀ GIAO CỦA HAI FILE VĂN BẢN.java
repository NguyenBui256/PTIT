WordSet.java
import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class WordSet {
    Map<String,Integer> mp;
    public WordSet(String path) throws FileNotFoundException {
        Scanner sc = new Scanner(new File(path));
        mp = new HashMap<>();
        while(sc.hasNext()) {
            String word = sc.next().toLowerCase();
            mp.put(word, mp.getOrDefault(word,0) + 1);
        }
    }

    public String union(WordSet other) {
        StringBuilder ans = new StringBuilder();
        Map<String,Integer> m = new HashMap<>();
        List<String> ls = new ArrayList<>();
        Set<String> keySet = mp.keySet();
        Set<String> keySet2 = other.mp.keySet();
        for(String key : keySet) {
            if(m.getOrDefault(key,0) == 0) {
                ls.add(key);
                m.put(key, 1);
            }
        }
        for(String key : keySet2) {
            if(m.getOrDefault(key,0) == 0) {
                ls.add(key);
                m.put(key, 1);
            }
        }
        Collections.sort(ls);
        for(String key : ls) {
            ans.append(key);
            ans.append(" ");
        }
        return ans.toString();
    }

    public String intersection(WordSet other) {
        StringBuilder ans = new StringBuilder();
        List<String> ls = new ArrayList<>();
        Set<String> keySet = mp.keySet();
        for(String key : keySet) {
            if(other.mp.getOrDefault(key,0) > 0) {
                ls.add(key);
            }
        }
        Collections.sort(ls);
        for(String key : ls) {
            ans.append(key);
            ans.append(" ");
        }
        return ans.toString();
    }
}


Main.java
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;
import java.lang.Math;

public class Main {

    public static void main(String[] args) throws IOException {
        WordSet s1 = new WordSet("DATA1.in");
        WordSet s2 = new WordSet("DATA2.in");
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
    public static void main4826834(String[] args) throws IOException {
        WordSet s1 = new WordSet("C:\\Users\\Admin\\Downloads\\demo\\thuchanh\\bai5\\src\\DATA1.in");
        WordSet s2 = new WordSet("C:\\Users\\Admin\\Downloads\\demo\\thuchanh\\bai5\\src\\DATA2.in");
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}

