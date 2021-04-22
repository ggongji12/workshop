import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

//        Generate a random number and ask the user to guess the number
//        continue asking until you receive the number
//        after 5 times of guessing show a game over message
//
//        - Show a welcome message
//        - Ask the user's name and say hello to the user
//        - Ask if we should start the game
//        - After receiving a positive answer generate a random number and ask
//        for the user's guess'
//        - If the guess is correct show a congratulations message and quit
//        - If number is incorrect, ask again until correct answer
//        - as a hint when the user guesses ask for higher or lower number
//        except the first try
//        - If the user failed 5 times, show a game over message and quit the game

        System.out.println("Welcome!");
        Scanner scanner = new Scanner(System.in);
        System.out.println("What is your name?: ");
        String name = scanner.next();
        System.out.println("Hello " + name + "!");
        System.out.println("Would you like to play this game? Yes or No? ");
        String decision = scanner.next();

        if (decision.equals("Yes")){
            int i = 0;
            while (i < 5) {
                Random random = new Random();
                int number = random.nextInt(4);
                System.out.println("Guess the random number from 0 to 4: ");
                int answer = scanner.nextInt();
                System.out.println("Your guess: " + answer + "," + "Random number: " + number);
                if (answer != number) {
                    System.out.println("Oh No! Try again!");
                }
                else{
                    System.out.println("Congratulations! You Won!");
                    return;
                }
                i++;
            }
        }
        else if (decision.equals("No")){
            System.out.println("Goodbye!");
        }
        else{
            System.out.println("Invalid response! Exiting Program..");
        }
    }
}
