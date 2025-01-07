import java.io.*;
import java.util.*;

public class Hello {
	public static int[] a = new int[1005];
	public static void main(String[] args) throws FileNotFoundException, IOException {
        DataInputStream  in = new DataInputStream (new FileInputStream("DATA.IN"));
		while(in.available() > 0) {
			a[in.readInt()]++;
		}
		for(int i = 0; i < 1000; i++){
			if(a[i] > 0) System.out.printf("%d %d\n", i, a[i]);
		}
    }
}