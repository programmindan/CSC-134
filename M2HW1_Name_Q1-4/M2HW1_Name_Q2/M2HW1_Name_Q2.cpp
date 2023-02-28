// CSC 134
// M2HW1 Q2 (M2LAB1)
// Name
// 3 February 2023

// This program is used by General Crates, Inc. to calculate
// the volume, cost, costumer charge, and profit of a crate
// of any size. It calculates this data from user input, which 
// consists of the dimensions of the crate.


#include <iostream>
#include <iomanip>

using namespace std;

int main(){

// Dimension & area variables
double length;																					// Lenght input from user in ft
double width;																					  // Width input from user in ft
double height;																					// Height input from user in ft
double volume;																					// Volume = L * W * H in cubic ft

// Cost & profit variables
double WHOLESALE_PRICE;																			// Cost to produce crate in $
double RETAIL_PRICE;																			  // Price crate is sold at in $
double profit;																					    // Profit from crate sold in $
const double WHOLESALE_PRICE_PER_CUBICFT = 0.30;												// Wholesale price of crate material in $ per cubic ft
const double RETAIL_PRICE_PER_CUBICFT = 0.52;													  // Retail price of crate material in $ per cubic ft

cout << setprecision(2) << fixed << showpoint;													// Sets outputs to two decimal places

// Output/Input to gather data for volume calculation
cout << "Enter the crate dimensions in feet: \n";
cout << "Lenght: ";
cin >> length;																					// User input for length in ft
cout << "Width: ";
cin >> width;																					  // User input for width in ft
cout << "Height: ";
cin >> height;																					// User input for height in ft

// Calculation for volume of crate
volume = length * width * height;

// Volume information output to user
cout << "The volume of the crate is " << volume;												    // Volume display
cout << " cubic feet.\n";

// Production cost calculation
WHOLESALE_PRICE = volume * WHOLESALE_PRICE_PER_CUBICFT;											// Wholesale price calculation using cubic ft

// Production cost output to user
cout << "Production cost: $" << WHOLESALE_PRICE << endl;										// Display production cost in $

// Retail sale price calculation
RETAIL_PRICE = volume * RETAIL_PRICE_PER_CUBICFT;												// Retail price calculation using cubic ft

// Retail price output to user
cout << "Retail price: $" << RETAIL_PRICE << endl;												// Display retail cost in $

// Profit calculation
profit = RETAIL_PRICE - WHOLESALE_PRICE;														// Profit in $

// Profit margin output to user
cout << "Profit: $" << profit << endl;															// Display profit margin in $

return 0;
}


