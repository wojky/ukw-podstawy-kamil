#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    
    cout << "=== Welcome to the Guess Number Game! ===" << endl;
    cout << "I've picked a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl << endl;
    
    // Game loop
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        
        // Check if input is valid
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a number." << endl;
            continue;
        }
        
        attempts++;
        
        if (guess < 1 || guess > 100) {
            cout << "Please enter a number between 1 and 100!" << endl;
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
