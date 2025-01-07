import java.io.*;
import java.util.*;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("NHIPHAN.in"));
        Scanner sc = new Scanner(new File("VANBAN.in"));
        Map<String,Integer> mp = new HashMap<>();
        List<String> ls = (List<String>) ois.readObject();
        int cnt = 0;
        for(String x : ls) {
            x = x.toLowerCase();
            for(String j : x.split(" ")) {
                cnt = mp.getOrDefault(j,0);
                cnt += 1;
                mp.put(j,cnt);
            }
        }
        while(sc.hasNext()) {
            String x = sc.next().toLowerCase();
            if(mp.getOrDefault(x,0) > 0) {
                mp.put(x,0);
                System.out.println(x);
            }
        }
    }
}