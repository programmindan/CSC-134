// CSC 134
// M4HW1 
// Name
// 7 March 2023

#include <iostream>

using namespace std;

// Void menu functions
void program_one() {																		// Question 1 program																																			

	/*
	This program will display a "5 times" table from 1 to 12.
	*/

	// Program 1 variables
	int TABLE_NUMBER = 5;																	// Variable number that will be used in the table
	int OUTPUT_SUM;																			// Sum of i * table number

	// For statement to calculate "5 times" table from 1 to 12
	for (int i = 1; i <= 12; i++) {
		OUTPUT_SUM = TABLE_NUMBER * i;														// Times table calculation
		cout << "5 times " << i << " is " << OUTPUT_SUM << ".\n";

	}
	cout << endl;
	cout << "Thank you for using the times table program. Farewell!";
	cout << endl;
}
void program_two() {																		// Question 2 program
	/*
	This program will display a times table from 1 to 12 based
	on a user input.
	*/

	// Program 2 variables
	int TABLE_NUMBER;																		// Variable number that will be used in the table
	int OUTPUT_SUM;																			// Sum of i * table number

	// Output/Input request to/from user
	cout << "Please enter a number between 1 and 12 to ";									// User output for table number request
	cout << "see that value's times table.\n";
	cout << "Enter number: ";
	cin >> TABLE_NUMBER;																	// Number input request for times table
	cout << endl;

	// For statement to calculate "5 times" table from 1 to 12
	for (int i = 1; i <= 12; i++) {
		OUTPUT_SUM = TABLE_NUMBER * i;														// Times table calculation
		cout << TABLE_NUMBER << " times " << i << " is " << OUTPUT_SUM << ".\n";

	}
	cout << endl;
	cout << "Thank you for using the times table program. Farewell!";
	cout << endl;
}
void program_three() {																		// Question 3 program
	/*
	This program will display a times table based on a user's input,
	and continues looping until a correct value
	is entered.
	*/

	// Program 3 variables
	int TABLE_NUMBER;																		// Variable number that will be used in the table
	int TABLE_LENGTH;																		// Variable to determine how many time the table number will be mulitplied
	int OUTPUT_SUM;																			// Sum of i * table number

	// Output/Input request to/from user
	cout << "Please enter a number between 1 and 12 to ";									// User output for table number request
	cout << "see that value's times table.\n";
	cout << "Enter number: ";
	cin >> TABLE_NUMBER;																	// Number input request for times table number
	cout << endl;

	// While statement to continue loop if an out of range number is entered
	while (TABLE_NUMBER < 1 || TABLE_NUMBER > 12) {											// While statement requesting an input between 1 and 12
		cout << "You have entered an invalid number.\n";									// User output message requesting a new number
		cout << "Please enter a number between 1 and 12: ";
		cin >> TABLE_NUMBER;																// Number input request for times table											
		cout << endl;
	}

	// Output/Input request to/from user
	cout << "Please enter a number for the multiplication table length.\n";					// User output for table length request
	cout << "Enter number: ";
	cin >> TABLE_LENGTH;																	// Number inputer request for table length
	cout << endl;

	// While statement to clear out any non-numaric input (TODO: FIX CONTINUOUS LOOPING ERROR IF NUMBER IS SELECTED FIRST, AND THEN A NON-NUMBERIC CHARACTER)   
	while (1) {																				// While loop for invalid non-numaric inputs
		if (cin.fail()) {																	// If statement that clears cin's invalid input												
			cin.clear();																	// Reset failbit
			cin.ignore(numeric_limits<streamsize>::max(), '\n');							// Skip bad input
			cout << "Please enter a number between 1 and 12: ";								// Output to user requesting new input
			cin >> TABLE_NUMBER;															// User input for program selection
			cout << endl;
		}
		else if (!cin.fail()) {																// Else if statement that breaks while loop after vailid input 
			break;
		}
	}
	// For statement to calculate "5 times" table from 1 to 12
	for (int i = 1; i <= TABLE_LENGTH; i++) {
		OUTPUT_SUM = TABLE_NUMBER * i;														// Output calculation
		cout << TABLE_NUMBER << " times " << i << " is " << OUTPUT_SUM << ".\n";

	}
	cout << endl;
	cout << "Thank you for using the times table program. Farewell!";
	cout << endl;
}

int main() {

	int USER_CHOICE;																		// Variable for user input program selection

	// Menu selection information output to user
	cout << "Welcome to the M4HW1 menu!\n";
	cout << "Please select a program from the list below.\n";
	cout << "Press 1 to calculate the \"5 times\" table.\n";
	cout << "Press 2 to calculate a times table between 1 and 12.\n";
	cout << "Press 3 to calculate a times table between 1 and 12 (loop).\n";
	cout << "Press 4 to quit.\n";
	cout << "Enter a number between 1 and 4: ";
	cin >> USER_CHOICE;																		// User input for program selection
	cout << endl;

	// While statement to clear out any non-numaric input (TODO: FIX CONTINUOUS LOOPING ERROR IF NUMBER IS SELECTED FIRST, AND THEN A NON-NUMBERIC CHARACTER) 
	while (1) {																				// While loop for invalid non-numaric inputs
		if (cin.fail()) {																	// If statement that clears cin's invalid input												
			cin.clear();																	// Reset failbit
			cin.ignore(numeric_limits<streamsize>::max(), '\n');							// Skip bad input
			cout << "Please enter a number between 1 and 12: ";								// Output to user requesting new input
			cin >> USER_CHOICE;																// User input for program selection
			cout << endl;
		}
		else if (!cin.fail()) {																// Else if statement that breaks while loop after vailid input 
			break;
		}
	}

	// While statement to continue loop if an out of range number is entered
	while (USER_CHOICE < 1 || USER_CHOICE > 4) {
		cout << "Please enter a number between 1 and 4: ";
		cin >> USER_CHOICE;
		cout << endl;
	}

	// If statements to tie user choices to designated void statements
	if (USER_CHOICE == 1) {																	// Program 1 call
		program_one();
	}
	if (USER_CHOICE == 2) {																	// Program 2 call
		program_two();
	}
	if (USER_CHOICE == 3) {																	// Program 3 call
		program_three();
	}
	if (USER_CHOICE == 4) {																	// Quitting message
		cout << "Farewell!\n";
	}

	return 0;
}