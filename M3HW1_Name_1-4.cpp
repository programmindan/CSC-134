// CSC 134
// M3HW1_Question 1
// Name
// 15 February 2023

/*
This program has four nested programs inside the main program.
Users can select which program they would like to use to complete
their task.
*/


#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

	// This program controls the four nested programs

	// Main program variables
	int PROGRAM_SELECTION;																		// Program selection input variable

	// Chat Bot variable Case 1
	string USER_INPUT;																			// Variable for user input

	// Receipt Calculator Variables Case 2
	double price;																				// Item price in dollar
	double tax_pct;																				// Tax rate example: 8% (0.08)
	double tax_amount;																			// Tax owed in dollars
	double total;																				// Total amount due in dollars
	double subtotal;																			// Subtotal in dollars
	double tip;																					// Tip amount in %
	double tip_amount;																			// Total amount of tip added to bill
	string item_name = "Meal";																	// Name of item purchased
	string dine_in;																				// Dine-in or takeout

	// set tip pct and tax pct
	tax_pct = 0.08;																				// 8%
	tip = 0.15;																					// 15%

	// Choose Your Own Adventure Game Variables Case 3
	int USER_CHOICE1;																			// Variable for 1st user choice
	int USER_CHOICE2;																			// Variable for 2nd user choice

	// Math practice program variables Case 4
	srand(time(0));																				// Random seed based on clock time
	int NUMBER_1 = rand() % 9 + 1;																// Variable for random number 1
	int NUMBER_2 = rand() % 9 + 1;																// Variable for random number 2
	double PROBLEM_SOLUTION;																	// Variable for problem solution
	double USER_ANSWER;																			// Variable for user answer

	// Calculation
	PROBLEM_SOLUTION = NUMBER_1 + NUMBER_2;														// Addition problem

	// Menu option output to user
	cout << "Welcome to M3HW1! Please select a program from\n";									// Output to user
	cout << "the list below (Enter a number between 1 and 4).\n";
	cout << "1. Chat Bot Program\n";
	cout << "2. Receipt Calculator Program\n";
	cout << "3. Choose Your Own Adventure Game\n";
	cout << "4. Math Practice Program\n";
	cin >> PROGRAM_SELECTION;																	// User input for program selection

	// Switch statement for program selection
	switch (PROGRAM_SELECTION) {

	case 1:																						// Case 1 = Chat Bot Program
		cout << "Welcome to Chat Bot!\n";

		/*
		This program will function as a chat bot
		*/

		cout << "Hello, I'm a C++ program!\n";
		cout << "Do you like me? Please type yes or no.\n";
		cin >> USER_INPUT;
		//getline(cin, USER_INPUT);																// Input from user
		transform(USER_INPUT.begin(), USER_INPUT.end(), USER_INPUT.begin(), ::tolower);			// Change input to lowercase

		// Chat bot responses
		if (USER_INPUT == "yes") {																// If statement for yes input
			cout << "That's great! I'm sure we'll get along.\n";
		}
		else if (USER_INPUT == "no") {															// else if statement for no input
			cout << "Well, maybe you'll learn to like me later.\n";
		}
		else {																					// else statement for an invalid input
			cout << "If you're not sure... that's OK.\n";
		}
		break;

	case 2:																						// Case 2 = Receipt Calculator Program
		cout << "Welcome to the Receipt Calculator program!\n";

		/*
		This program will function as a receipt calculator.  Users can
		select dine in or takeaway.

		 The price before tax
		 the amount of tax owed (8%)
		 15% tip
		 The total including tax and excluding tip
		*/

		// welcome message and meal price input
		cout << "Welcome to our restaurant. ";													// Display message
		cout << "Please enter the cost of your meal (#.##).\n";									// Display information request message
		cin >> price;																			// User input for price

		// input for dinning experience (dine-in or takeout)
		cout << "Will your order be takeout, or dine-in (Enter takeout or dine-in)?";			// Display message for dinning experience
		cin >> dine_in;																			// User input for dinning experience
		transform(dine_in.begin(), dine_in.end(), dine_in.begin(), ::tolower);					// Change input to lowercase

		cout << fixed << setprecision(2);														// Set decimal precision to 2

		/* if and else statment to calculate tip amount based on dinning
		experience selected*/
		if (dine_in == "dine-in") {																// Tip calculation if dine-in 15% * price
			tip_amount = tip * price;
		}
		else if (dine_in == "takeout") {														// Tip calculation if takeaway 15% * 0 = $0.00
			tip_amount = tip * 0;
		}
		else {																					// Invalid dinning experience selection
			cout << "Invalid dinning experience selection. Please select\n";
			cout << "dine-in or takeout: ";
			cin >> dine_in;																		// Request for a valid response

			if (dine_in == "dine-in") {															// Tip calculation if dine-in 15% * price
				tip_amount = tip * price;
			}
			else if (dine_in == "takeout") {													// Tip calculation if takeaway 15% * 0 = $0.00
				tip_amount = tip * 0;
			}
		}

		subtotal = price;																		// Calculate subtotal
		tax_amount = price * tax_pct;															// Tax in $ is price * tax_pct
		total = price + tax_amount + tip_amount;												// Calculate total

		cout << endl << "RECEIPT" << endl << endl;												// Display message
		cout << "Dine-in or Takeout: ";															// Display message
		transform(dine_in.begin(), dine_in.end(), dine_in.begin(), ::toupper);					// Display dinning experience selection
		cout << dine_in << endl;																// Dinning experience output
		cout << "-----------------------------" << endl;										// Dispaly message
		cout << item_name << "\t\t" << "$" << price << endl;									// Display item name & price
		cout << endl;
		cout << "Subotal " << "\t" << "$" << subtotal << endl;									// Display subtotal
		cout << endl;
		cout << "Tax" << "\t\t" << "$" << tax_amount << endl;									// Display taxes owed, excludes tip
		cout << endl;
		cout << "Tip (15%)" << "\t" << "$" << tip_amount << endl;								// Display tip amount                            
		cout << "-----------------------------" << endl;
		cout << "Total" << "\t\t" << "$" << total << endl;										// Display total cost
		break;

	case 3:																						// Case 3 = Choose Your Own Adventure Program
		cout << "Welcome to the Choose Your Own Adventure game!\n";

		// Welcome message for game
		cout << "Welcome to the Adventure game! Are you ";										// Welcome message to user
		cout << "ready to play the most suspenseful game ever";
		cout << " created!\n" << endl;

		// Code for game choice #1
		cout << "Let's begin the adventure!\n" << endl;											// Message to begin adventure
		cout << "It's a beautiful sunny spring day, so you decide to go for a";
		cout << " relaxing walk through the local national park.\n";
		cout << "You have been walking for about an hour when you suddenly hear";
		cout << " some bushes rustling about 50 yards from the trail.\n" << endl;
		cout << "Press 1: If you would like to continue on your lovely walk";					// Message for option 1
		cout << " through the forest.\n" << endl;
		cout << "Press 2: If you would like to turn around and head back in";					// Message for option 2
		cout << " the direction you came from.\n";
		cin >> USER_CHOICE1;																	// User input request for choice 1
		cout << endl;

		if (USER_CHOICE1 == 1) {																// Output for choice 1
			cout << "You quickly notice a giant grizzly bear crashing through ";
			cout << "the bushes heading your way. At that moment you \n";
			cout << "realize your time on this earth is over....\n";

		}
		else if (USER_CHOICE1 == 2) {															// Message for option 2
			cout << "As you begin briskly walking in the direction of your ";
			cout << "vehicle, a giant grizzly bear comes crashing through the \n";
			cout << "bushes. You think there's enough distance between you and";
			cout << " the bear to possibly get away.\n" << endl;

			cout << "Press 1: If you would like to climb a nearby tree.\n" << endl;				// Option 1 for choice 2
			cout << "Press 2: If you would like to run as fast as you can ";					// Option 2 for choice 2
			cout << "towards your vehicle.\n" << endl;
			cin >> USER_CHOICE2;																// User input request for choice 2
			cout << endl;

			if (USER_CHOICE2 == 1) {															// Message for choice 2, option 1

				cout << "You successfully climb the tree, but the grizzly bear ";				// Message for option 1
				cout << "climbs the tree faster than one of those spider monkeys you've \n";
				cout << "seen on National Geographic. At that moment you realize ";
				cout << "your time on this earth is over...\n";
			}

			else {																				// Message for choice 2, option 2
				cout << "A game warden hears the commotion and comes to your rescue.";			// Message for option 2
				cout << " He scares the animal off with bear spray and you live out \n";
				cout << "the rest of your life walking on a treadmill in your basement.\n";
			}
		}
		break;

	case 4:																						// Case 4 = Math Practice Program

		/*
		This program will allow user to practice basic math problem through
		randomly generated numbers.
		*/

		// User output and input
		cout << "Welcome to the math practice game!\n";											// Output to user
		cout << "Are you ready to practice your math skills?\n" << endl;
		cout << "The problem is:" << "\t";
		cout << NUMBER_1 << " + " << NUMBER_2 << " = \n" << endl;								// Addition problem output
		cout << "Please enter you answer: ";
		cin >> USER_ANSWER;																		// User input for answer

		if (USER_ANSWER == PROBLEM_SOLUTION) {													// Correct answer response
			cout << "The answer is " << PROBLEM_SOLUTION << endl;								// Solution output
			cout << "Good job. You answered correctly.\n";
		}
		else if (USER_ANSWER != PROBLEM_SOLUTION) {												// Wrong answer response
			cout << "You answered " << USER_ANSWER << endl;										// User answer
			cout << "The correct answer is " << PROBLEM_SOLUTION << endl;						// Solution answer
		}
		break;

	default:																					// Output for an invalid selection
		cout << "Invalid selection, please enter a number between 1 and 4.\n";
		break;
	}

	return 0;
}