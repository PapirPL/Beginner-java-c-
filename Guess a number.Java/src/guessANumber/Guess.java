package guessANumber;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Random;
 
public class Guess
{
    /**
     * @param args
     * @throws IOException 
     * @throws NumberFormatException 
     */
    public static void main(String[] args) throws NumberFormatException, IOException 
    {
        // TODO Auto-generated method stub
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        boolean wynik = false;
        int times=1;
        Random rand = new Random();
        int number = rand.nextInt(100);
        while (wynik==false)
        {
            System.out.print("Choose number from 1 to 100: ");
            int guess = Integer.parseInt(reader.readLine());
            if(guess==number)
            {
                System.out.println("Well done you guessed it!");
                wynik=true;
            }
            else if (guess>number)
            {
                System.out.println("To high.");
                wynik=false;
                times++;
            }
            else if (guess<number)
            {
                System.out.println("To small.");
                wynik=false;
                times++;
            }
        }
        System.out.println("You guessed at "+times+"try");
    }
}