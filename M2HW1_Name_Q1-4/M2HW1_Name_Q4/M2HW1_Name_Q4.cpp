// CSC 134
// M2HW1 Q4
// Name
// 3 February 2023

// This program is made to output a 4 line cheering message

#include <iostream>
#include <string>

using namespace std;

int main() {
	
// Variables for cheer program
	string LETS_GO = "Let's go ";														// Variable for cheer
	string school = "FTCC";															// Variable for school name
	string team = "Trojans";														// Variable for school team name
	string CHEER_ONE = LETS_GO + school;													// Variable for cheer one output
	string CHEER_TWO = LETS_GO + team;													// Variable for cheer two output


// Cheer output to user
	cout << CHEER_ONE << endl;														// Line 1 output
	cout << CHEER_ONE << endl;														// Line 2 output
	cout << CHEER_ONE << endl;														// Line 3 output
	cout << CHEER_TWO << endl;														// Line 4 output


	return 0;
}
