import java.util.Scanner;

public class EvenOddChecker {
    public static void main(String[] args) {
         Scanner input00 = new Scanner(System.in);
        System.out.print("Masukan Angka : ");
        int angka = input00.nextInt();
        if (angka % 2 ==0){
            System.out.println("Angka " + angka + " adalah bilangan genap");
        }else{
            System.out.println("Angka " + angka + " adalah bilangan ganjil");
        }
        String  hasil = (angka % 2 == 0) ? "Bilangan Genap" : "Bilangan Ganjil";
        System.out.println("Angka " + angka + " adalah = " + hasil);
    }
}
