import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Vector;
import java.io.File;
import java.io.FileNotFoundException;
public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        Vector<String> v = new Vector<>();
        while (sc.hasNext()) {
            String s = sc.next();
            try {
                Integer.parseInt(s);
            } catch (Exception x) {
                v.add(s);
            }
        }
        Collections.sort(v);
        for (int i = 0; i < v.size(); i++)
            System.out.print(v.get(i) + " ");
    }
}