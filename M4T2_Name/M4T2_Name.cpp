// CSC 134
// M4T2 - Menus
// Name
// 27 February 2023

#include <iostream>

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
    // Sum up five numbers
}
void option_three() {
    // TODO: What does this even do
}
int main()
{
    //display menu with 3 choices
    cout << "Welcome to the menu" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to sum up numbers" << endl;
    cout << "Press 3 to TODO" << endl;                                  // Not implemented yet
    cout << "Choice: ";

    // Input validation
    int choice;
    cin >> choice;

    // TODO: input validation
    while (choice < 1 || choice > 3) {                                  // User chooses correct number
        cout << "Please choose a number between 1 and 3: ";
        cin >> choice;
    }
    if (choice == 1) {
        option_one();                                                   // Function 1 call
    }
    cout << "Thank you for using the menu." << endl;

    return 0;
}
