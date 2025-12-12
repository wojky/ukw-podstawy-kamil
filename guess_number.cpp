#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // Constants for the game
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 100;
    
    // Seed the random number generator
    srand(time(0));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % MAX_NUMBER + MIN_NUMBER;
    int guess;
    int attempts = 0;
    
    cout << "=== Welcome to the Guess Number Game! ===" << endl;
    cout << "I've picked a number between " << MIN_NUMBER << " and " << MAX_NUMBER << "." << endl;
    cout << "Can you guess what it is?" << endl << endl;
    
    // Game loop
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        
        // Check if input is valid
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }
        
        attempts++;
        
        if (guess < MIN_NUMBER || guess > MAX_NUMBER) {
            cout << "Please enter a number between " << MIN_NUMBER << " and " << MAX_NUMBER << "!" << endl;
            continue;
        }
        
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl << endl;
        } else {
            cout << endl << "🎉 Congratulations! You guessed it!" << endl;
            cout << "The number was: " << secretNumber << endl;
            cout << "It took you " << attempts << " attempts." << endl;
            break;
        }
    }
    
    return 0;
}
