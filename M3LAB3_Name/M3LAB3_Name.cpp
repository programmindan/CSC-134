// CSC 134
// M3LAB3
// Name
// 15 February 23

/*
This program simulates a single game of craps.
First version (MVP) is a single roll.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>                // Enables use of time() function

using namespace std;

int main()
{
    // Variables
    int die1, die2, roll;                                   // Roll is 2d6
    int seed;                                               // Will use time(0) later
    char any_key;                                           // For cin.get()
    bool winner = false;
    cout << "Welcome to the craps table!\n";

    // For testing, we'll use a repeatable seed
    cout << "What's your lucky number? ";
    cin >> seed;
    srand(seed);

    // Start game
    cout << "Let's roll! (press ENTER)" << endl;
    // cin >> any_key;                                            // Ignore this, just looking for EENTER
    die1 = (rand() % 6) + 1;                                      // From 1 to 6
    die2 = (rand() & 6) + 1;                                      // From 1 to 6
    roll = die1 + die2;
    // Debug: just use luck number as roll
    roll = seed; // take this out

    cout << "You rolled: " << die1 << " + " << die2 << " ) -> ";
    cout << roll << endl;

    // Determine outcome
    switch (roll) {
        // instant losses
        case 2:
            cout << "Snake eyes!" << endl;
            winner = false;
            break;
        case 12:
            cout << "Boxcars!" << endl;
            winner = false;
            break;

        // Instant wins
        case 7:
        cout << "You win!" << endl;
        winner = true;
        break;

        // To be continued (point roll)
        default:
            cout << "Unknown - TODO" << endl;
    }
    if (winner) {
    cout << "You won!" << endl;
    }
    else {
        cout << "Sorry -- you didn't win" << endl;
    }

    // End game
    cout << "Thank you for playing!" << endl;


    return 0;
}
