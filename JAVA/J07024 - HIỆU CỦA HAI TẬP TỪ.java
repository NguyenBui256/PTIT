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

    public String difference(WordSet other) {
        StringBuilder ans = new StringBuilder();
        List<String> ls = new ArrayList<>();
        Set<String> keySet = mp.keySet();
        for(String key : keySet) {
            if(other.mp.getOrDefault(key,0) == 0) {
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
import java.io.*;
import java.util.*;
import java.lang.Math;

public class Main {

    public static void main(String[] args) throws IOException {
        WordSet s1 = new WordSet("DATA1.in");
        WordSet s2 = new WordSet("DATA2.in");
        System.out.println(s1.difference(s2));
        System.out.println(s2.difference(s1));
    }
    public static void main1981217(String[] args) throws IOException {
        WordSet s1 = new WordSet("DATA1.in");
        WordSet s2 = new WordSet("DATA2.in");
        System.out.println(s1.difference(s2));
        System.out.println(s2.difference(s1));
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

