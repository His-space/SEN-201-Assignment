//This is a number guessing game, written and developed by Jesupamilerin Olawale.
 //importing modules
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 //function to generate a random number between 1 and 100
int main(){
    //seed the random number generation
    srand(static_cast<unsigned int>(time(nullptr)));

    //variables(defined in README.md)
    int secret_number = rand() % 100 + 1; //random number between 1 and 100
    int user_guess = 0;
    int number_of_attempts = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    //The game logic
    do {
        //accept an input from the user
        cout << "Enter your guess (between 1 and 100): ";
        //store input in user_guess variable
        cin >> user_guess;
        //increase attempt count each turn
        number_of_attempts++;

        //now for the conditionals
        if (user_guess < secret_number){
            cout << "Too low! Try again." << endl;
        }
        else if (user_guess > secret_number){
            cout << "Too high! Try again." << endl;
        }
        else if (user_guess < 1 || user_guess > 100){
            cout << "Please enter a number between 1 and 100." << endl;
        }
        else if (user_guess != static_cast<int>(user_guess)){
            cout << "Invalid input. Please enter a number." << endl;
        }
        
        else if (number_of_attempts >= 15){
            cout << "Sorry, you've used all your attempts. The secret number was " << secret_number << "." << endl;
        }
        else {
            cout << "Congrats! You've guessed the number " << secret_number << " in " << number_of_attempts << " attempts." << endl;
        }
    }while (user_guess != secret_number);

    return 0;

}
