import classes.HeartRates;
import java.util.Scanner;
class Main {
  public static void main(String[] args) {
    Scanner input= new Scanner(System.in);
    String firstName,lastName;
    int by,bd,bm,ay,ad,am;
    System.out.println("Insira o nome:");
    firstName=input.nextLine();
    System.out.println("Insira o sobrenome:");
    lastName=input.nextLine();
    System.out.println("Insira o dia de nascimento:");
    bd=input.nextInt();
    System.out.println("Insiara o mês de nascimento:");
    bm=input.nextInt();
    System.out.println("Insira o ano de nascimento:");
    by=input.nextInt();
    System.out.println("Insira o dia de hoje:");
    ad=input.nextInt();
    System.out.println("Insiara o mês atual:");
    am=input.nextInt();
    System.out.println("Insira o ano atual:");
    ay=input.nextInt();
    HeartRates person=new HeartRates(firstName, lastName, bd, bm, by, ad, am, ay);
    System.out.printf("%s %s was born in %d/%d/%d and is %d years old.\nMax Heart Frequency: %d\nNormal Heart Frequency: %d a %d", person.getFirstName(), person.getLastName(), person.getMonth(), person.getDay(), person.getYear(), person.getYearsOld(), person.maxHeartF(), person.aHeartF(), person.bHeartF());
    
  }
}