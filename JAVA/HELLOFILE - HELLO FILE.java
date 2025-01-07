import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner scanner = new Scanner(new File("Hello.txt"));
        while(scanner.hasNextLine()){
            System.out.println(scanner.nextLine());
        }
    }
}