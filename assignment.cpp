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
    int number_of_attemps = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    //The game logic


    return 0;

}
