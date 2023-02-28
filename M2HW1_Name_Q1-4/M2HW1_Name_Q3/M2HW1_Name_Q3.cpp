// CSC 134 
// M2HW1 Q3
// Name
// 3 February 2023

// This program is used to calculate the amount of remaining slices
// based on user input for pizzas ordered and slices per pizza. The 
// calculation is based on each guest receiving three slices of pizza

#include <iostream>

using namespace std;

int main() {

	// Variables for remaining pizza slices calculation
	double SLICES_PER_GUEST = 3;												// Variable for slices per guest
	double guest;														// Variable for number of guest
	double PIZZAS_ORDERED;													// Variable for pizzas ordered
	double SLICES_PER_PIZZA;												// Variable for slices per pizza
	double TOTAL_SLICES;													// Variable for total pizza slices
	double TOTAL_SLICES_NEEDED;												// Variable for total slices needed
	double SLICES_REMAINING;												// Variable for slices remaining

	// Information input from user for calculation
	cout << "This program's calculation is based on each guest receiving ";
	cout << SLICES_PER_GUEST << " slices of pizza.\n";									// Displays slices per guest
	cout << "Total pizzas ordered: ";
	cin >> PIZZAS_ORDERED;													// User input for pizzas ordered
	cout << "Slices per pizza: ";				
	cin >> SLICES_PER_PIZZA;												// User input for slices per pizza
	cout << "Guest attending party; ";
	cin >> guest;														// User input for # guest attending party

	// Calculation for slices remaining
	TOTAL_SLICES = PIZZAS_ORDERED * SLICES_PER_PIZZA;
	TOTAL_SLICES_NEEDED = SLICES_PER_GUEST * guest;
	SLICES_REMAINING = TOTAL_SLICES - TOTAL_SLICES_NEEDED;

	// Information output to user on slices remaining
	cout << "Total slices remaining: " << SLICES_REMAINING;									// Output to user for slices remaining

	return 0;
}
