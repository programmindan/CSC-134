// CSC 134
// M4T2 - Menus
// Name
// 1 March 2023
// Version 2 -- started our character creator
// for Thudd

#include <iostream>
#include <cstdlib>                                              // Enables rand(), and srand()
#include <ctime>                                                // Enables time function

using namespace std;

// Menu functions
void option_one() {
    //count from 0 to 9
    cout << "Using while() to count" << endl;
    int num = 0;
    while (num < 10) {
        cout << num << " ";
        num++;
    }
    cout << endl;

    cout << "Using for() to count" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
    }
}
void option_two() {
    // Dice roller
    int d6_1, d6_2, d6_3;                                   // 3 dice (6 sided)
    int total;                                              // 3d6
    int seed;
    seed = time(0);
    srand(seed);

    // Roll the dice
    d6_1 = (rand() % 6) + 1;                                // 0-5, then add one
    d6_2 = (rand() % 6) + 1;                                // 0-5, then add one
    d6_3 = (rand() % 6) + 1;                                // 0-5, then add one
    total = d6_1 + d6_2 + d6_3;
    cout << "Rolling 3d6: ";
    cout << d6_1 << " + " << d6_2 << " + " << d6_3;         // Shows value for each dice roll
    cout << " = " << total << endl;                         // Display total
}
void option_three() {
    // Sum and average of dice
}

// There is no option 4 function, it's just quit.

int main()
{
    //display menu with 3 choices
    cout << "Welcome to the menu" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to roll dice" << endl;
    cout << "Press 3 to roll a character" << endl;
    cout << "Press 4 to quit" << endl;
    cout << "Choice: ";

    // Input validation
    int choice;
    cin >> choice;

    // TODO: input validation
    while (choice < 1 || choice > 4) {                                  // User chooses correct number
        cout << "Please choose a number between 1 and 4: ";
        cin >> choice;
    }
    if (choice == 1) {
        option_one();                                                   // Function 1 call
    }
    if (choice == 2) {
        option_two();
    }
    if (choice == 3) {
        option_three();
    }
    if (choice == 4) {
        cout << "Quiting time!" << endl;
    }
    cout << "Thank you for using the menu." << endl;

    return 0;
}
