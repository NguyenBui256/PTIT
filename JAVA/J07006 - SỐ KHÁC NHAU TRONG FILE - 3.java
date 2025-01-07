import java.io.*;
import java.util.*;

public class Hello {
	public static int[] a = new int[1005];
	public static void main(String[] args) throws FileNotFoundException, ClassNotFoundException, IOException {
		ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));
		List<Integer> l = (ArrayList<Integer>) ois.readObject();
        int[] a = new int[1000];
        for (Integer i : l)
            a[i]++;
        for (int i = 0; i < 1000; i++)
            System.out.println(i + " " + a[i]);
    }
}