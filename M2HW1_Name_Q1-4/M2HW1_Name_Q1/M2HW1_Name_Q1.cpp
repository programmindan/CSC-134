// CSC 134
// M2HW1
// Name
// 2 February 2023

// This program simulates banking transactions

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

	// Variables for account & user information
	string FIRST_NAME;																		// Variable for first name
	string LAST_NAME;																		// Variable for last name
	double ACCOUNT_BALANCE;																	// Variable for starting account balance in $
	long long ACCOUNT_NUMBER = 654784932018;												// Variable for account number 8 digits
	double ACCOUNT_DEPOSIT;																	// Variable for account balance in $
	double ACCOUNT_WITHDRAWAL;																// Variable for account withdrawal amount in $
	double ACCOUNT_FINAL_BALANCE;															// Variable for final account balance in $

	// Sets outputs to 2 decimal points
	cout << setprecision(2) << fixed << showpoint;

	// Program user input request
	cout << "Please enter your first name: ";
	getline(cin, FIRST_NAME);																// Gets first name from user input
	cout << "Please enter your last name: ";
	getline(cin, LAST_NAME);																// Gets last name from user input
	cout << "Starting account balance: $";
	cin >> ACCOUNT_BALANCE;																	// Gets account balance from user input
	cout << "Deposit amount: $";
	cin >> ACCOUNT_DEPOSIT;																	// Gets deposit amount from user
	cout << "Withdrawal amount: $";
	cin >> ACCOUNT_WITHDRAWAL;																// Gets withdrawal amount from user

	// Final account balance calculation
	ACCOUNT_FINAL_BALANCE = (ACCOUNT_BALANCE + ACCOUNT_DEPOSIT) - ACCOUNT_WITHDRAWAL;

	// Variable to display full name
	string FULL_NAME = FIRST_NAME + " " + LAST_NAME;

	// Account information output to user
	cout << "Account Holder Name: " << FULL_NAME << endl;									// Displays account holder name
	cout << "Account Number: " << ACCOUNT_NUMBER << endl;									// Displays account number
	cout << "Final Account Balance: " << ACCOUNT_FINAL_BALANCE << endl;						// Displays final account balance

	return 0;
}


