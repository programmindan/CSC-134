// CSC 134
// M5HW1 - Q1-Q6
// Name
// 1 April 2023

/*
M5HW1 - Q1 - Q6
*/

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>													// Used for set precision
#include <numeric>													// Used to sum vector

using namespace std;


// Variables, Void Statements, & Vectors Program 1
vector<string> MONTH_COUNT(3);												// Vector to store month inputs from user
vector<double> RAIN_MONTH_TOTAL(3);											// Vector to store each month's rainfall total

// Void function to collect input data for MONTH_COUNT vector
void MONTH_INPUT() {
    for (int i = 0; i < MONTH_COUNT.size(); i++) {
        cout << "Month " << (i + 1) << ": ";
        cin >> MONTH_COUNT.at(i);
    }
}

// Void function to collect input data for RAIN_MONTH_TOTAL vector
void RAINFALL_INPUT() {
    for (int i = 0; i < RAIN_MONTH_TOTAL.size(); i++) {
        cout << "Rainfall total for " << MONTH_COUNT.at(i) << ": ";
        cin >> RAIN_MONTH_TOTAL.at(i);
    }
}

// Void function to display user input data Month: Rainfall total for month
void USER_DATA_OUT() {
    for (int i = 0; i < MONTH_COUNT.size(); i++) {
        cout << MONTH_COUNT[i] << ": " << RAIN_MONTH_TOTAL[i] << "\t";
    }
    cout << endl;
}

// Void function to calculate three month rainfall average
void RAINFALL_THREEMONTH_AVG() {
    double RAINFALL_SUM = 0;												// Double to store three month total rainfall
    double RAINFALL_AVG = 0;												// Double to store three month rainfall average

    RAINFALL_SUM = RAIN_MONTH_TOTAL[0] + RAIN_MONTH_TOTAL[1] + RAIN_MONTH_TOTAL[2];					// Sums RAIN_MONTH_TOTAL vector 
    
    RAINFALL_AVG = RAINFALL_SUM / 3;											// Calculates average rainfall using RAINFALL_SUM

    cout << "The average rainfall for " << MONTH_COUNT.at(0) << ", ";							// Three month rainfall average displayed to user
    cout << MONTH_COUNT.at(1) << ", and " << MONTH_COUNT.at(2) << " is ";
    cout << fixed << setprecision(2) << RAINFALL_AVG << " inches.\n";
}




// Variables, Void Statements, and Vectors Program 2
void ORTHO_VOL() {

    // Variables & Vectors
    vector<double> ORTHO_LENGTHS(3);											// Vector to hold user input length values
    vector<string> ORTHO_SIDE_NAMES(3);											// Vector to hold side names
    double BOX_VOL;													// Holds answer of volume calculation


    // Names of sides stored in ORTHO_SIDE_NAMES vector
    ORTHO_SIDE_NAMES.at(0) = "Length";
    ORTHO_SIDE_NAMES.at(1) = "Width";
    ORTHO_SIDE_NAMES.at(2) = "Height";

    // For statement to request user side lenght inputs and store in ORTHO_LENGTHS vector
    for (int i = 0; i < ORTHO_SIDE_NAMES.size(); i++) {									// Request for user to input each side length
        cout << ORTHO_SIDE_NAMES[i] << ": ";
        cin >> ORTHO_LENGTHS[i];
        cout << endl;

        // While statement to correct an invalid input and replace it in the vector ORTHO_LENGTHS
        while (ORTHO_LENGTHS[i] <= 0) {
            cout << "You have entered an invalid number.\n";
            cout << "Please enter a positive number greater than zero: ";
            cin >> ORTHO_LENGTHS[i];
            cout << endl;
        }
    }

    BOX_VOL = ORTHO_LENGTHS[0] * ORTHO_LENGTHS[1] * ORTHO_LENGTHS[2];							// Calculates volume of rectangle using values stored in ORTHO_LENGTHS vector

    cout << "Orthotope volume: " << fixed << setprecision(2) << BOX_VOL << endl;					// Output to user displaying volume of rectangle

}




// Variables, Void Statements, and Vectors Program 3
long int USER_INPUT;													// Variable to store input from user

// Void function for invalid input correction 
void INVALID_INPUT_CORR() {
    while (USER_INPUT <= 0 || USER_INPUT > 10) {
        cout << "You have entered an invalid number.\n";
        cout << "Please enter anumber between 1 and 10: ";
        cin >> USER_INPUT;
        cout << endl;
    }
}




// Variables, Void Statements, and Vectors Program 4

// Void statements
void AREA_CIRCLE() {

    //Variables
    double Pi = 3.14159;												// Not pumpkin pie, but pi
    double RADIUS;													// Variable for radius
    double C_AREA;													// Variable for area of circle

    cout << "Area calculator for a circle.\n" << endl;
    cout << "Please enter the Circle's radius: ";
    cin >> RADIUS;													// User radius input request

    while (RADIUS < 0) {												// Invalid input correction
        cout << "The radius cannot be less than zero.\n";
        cout << "Please enter a valid value: ";
        cin >> RADIUS;
    }

    // Area calculation
    C_AREA = RADIUS * Pi;

    cout << endl;
    cout << "The area is " << fixed << setprecision(2) << C_AREA << endl;						// Display area calculation result

}

void AREA_RECT() {

    // Variables
    vector<string> RECT_SIDES{ "Length", "Width" };									// Vector for side names
    vector<double> RECT_SLENGTHS(2);											// Vector to hold side lengths
    double R_AREA;

    cout << "Area calculator for a Rectangle.\n" << endl;

    for (int i = 0; i < RECT_SLENGTHS.size(); i++) {									// Request data to fill RECT_SLENGTHS vector
        cout << "Enter " << RECT_SIDES[i] << " : ";
        cin >> RECT_SLENGTHS.at(i);
        cout << endl;

        while (RECT_SLENGTHS[i] < 0) {											// Invalid input correction request
            cout << "Please enter a positive number.\n";
            cout << "Enter " << RECT_SIDES[i] << " : ";
            cin >> RECT_SLENGTHS.at(i);
            cout << endl;
        }
    }

    // Calculate area of rectangle
    R_AREA = RECT_SLENGTHS[0] * RECT_SLENGTHS[1];

    cout << "The area is " << fixed << setprecision(2) << R_AREA << endl;						// Display area calculation result
}

void AREA_TRIA() {

    // Variables
    vector<string> TRIA_SIDES{ "Base", "Height" };									// Vector for side names
    vector<double> TRIA_SLENGTHS(2);											// Vector to hold side lengths
    double T_AREA;

    cout << "Area calculator for a Triangle.\n" << endl;

    for (int i = 0; i < TRIA_SIDES.size(); i++) {									// Request data to fill RECT_SLENGTHS vector
        cout << "Enter " << TRIA_SIDES[i] << " : ";
        cin >> TRIA_SLENGTHS.at(i);
        cout << endl;

        while (TRIA_SLENGTHS[i] < 0) {											// Invalid input correction request
            cout << "Please enter a positive number.\n";
            cout << "Enter " << TRIA_SIDES[i] << " : ";
            cin >> TRIA_SLENGTHS.at(i);
            cout << endl;
        }
    }

    // Calculate area of rectangle
    T_AREA = TRIA_SLENGTHS[0] * TRIA_SLENGTHS[1] * 0.5;

    cout << "The area is " << fixed << setprecision(2) << T_AREA << endl;						// Display area calculation result
}




// Menu Void statements6

void program_one() {

    /*
    This program will calculate the average rain fall for any given three
    month period.
    */
        cout << "Hello! Welcome to the Average Rainfall Calculator.\n";							// Welcome message to user
        cout << "To calculate average rainfall, please enter the three";
        cout << " months you would like to average.\n";
        cout << endl;

        MONTH_INPUT();													// Calls MONTH_INPUT void function to collect month name data

        cout << endl;
        cout << "Please enter the rainfall total for each month individually.\n";					// User output to collect monthly rainfall totals
        cout << endl;

        RAINFALL_INPUT();												// Calls RAINFALL_INPUT void function to collect rainfall data

        cout << endl;

        USER_DATA_OUT();												// Calls USER_DATA_OUT void function to display user input data
        cout << endl;

        RAINFALL_THREEMONTH_AVG();											// Calls RAINFALL_THREEMONTH_AVG void function to display rainfall average

}

void program_two() {

    /*
    This program calculates the volume of a rectangle, while rejecting numbers
    zero or less.
    */

    // Welcome message to user
    cout << "Welcome to the orthotope volume calculator!\n";
    cout << "Please enter the length of each side went prompted.\n" << endl;

    ORTHO_VOL();													// Calls void function to calculate volume of box

}

void program_three() {

    /*
    This program will convert a numeric value, between 1 and 10, to a
    roman numeral.
    */
    // Vector & Variables
    vector<string> ROMAN_NUM{ "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X" };				// Vector to store roman numberals

    // Welcome message to user
    cout << "Welcome to the Roman numeral converter program!\n";
    cout << "Please enter a number between 1 and 10: ";
    cin >> USER_INPUT;													// User input request
    cout << endl;

    INVALID_INPUT_CORR();												// User correction request for invalid input

    cout << "The Roman numeral version of " << USER_INPUT;

    // Switch statement to convert the user input to a Roman numeral using ROMAN_NUM vector
    switch (USER_INPUT) {

    case 1:
        cout << " is " << ROMAN_NUM[0] << ".";
        break;

    case 2:
        cout << " is " << ROMAN_NUM[1] << ".";
        break;

    case 3:
        cout << " is " << ROMAN_NUM[2] << ".";
        break;

    case 4:
        cout << " is " << ROMAN_NUM[3] << ".";
        break;

    case 5:
        cout << " is " << ROMAN_NUM[4] << ".";
        break;

    case 6:
        cout << " is " << ROMAN_NUM[5] << ".";
        break;

    case 7:
        cout << " is " << ROMAN_NUM[6] << ".";
        break;

    case 8:
        cout << " is " << ROMAN_NUM[7] << ".";
        break;

    case 9:
        cout << " is " << ROMAN_NUM[8] << ".";
        break;

    case 10:
        cout << " is " << ROMAN_NUM[9] << ".";
        break;
    }
    cout << endl;
}

void program_four() {

    /*
    This program is a geometry calculator that allows users to calculate the area of a 
    circle, rectangle, and triangle.
    */

    // Variables
    char CALC_CHOICE;
    int CALC_CONV;

    // Welcome message to user
    cout << "Welcome to the Geometry Calculator!\n";
    cout << "Please select a calculator from the list below.\n" << endl;
    cout << "Program 1: Calculate the Area of a Circle.\n";
    cout << "Program 2: Calculate the Area of a Rectangle.\n";
    cout << "Program 3: Calculate the Area of a Triangle.\n";
    cout << "Quit\n" << endl;
    cin >> CALC_CHOICE;												// User input request																											
    cout << endl;

    CALC_CONV = CALC_CHOICE;											// Convert char to int

    while (CALC_CONV < 49 || CALC_CONV > 52) {									// Invalid input correction

        cout << "Please enter a number between 1 and 4: ";
        cin >> CALC_CHOICE;
        CALC_CONV = CALC_CHOICE;
        cout << endl;
    }

    if (CALC_CONV == 49) {											// Circle Area Calculator call
        AREA_CIRCLE();
    }
    if (CALC_CONV == 50) {											// Rectangle Area Calculator call
        AREA_RECT();
    }
    if (CALC_CONV == 51) {											// Triangle Area Calculator call
        AREA_TRIA();
    }
    if (CALC_CONV == 52) {											// Quitting message
        cout << "Farewell!\n";
    }
}

void program_five() {
    
    cout << "This program is still in development.\n";
    cout << "Please check for updates later.\n";
}

int main() {

    // Variables & Vectors
    char USER_CHOICE;                                                                                           // User input storage for menu choice
    int CHOICE_CONV;

    cout << "Welcome to M5HW1!\n";
    cout << "Please select a program from the list below.\n" << endl;
    cout << "Program 1: Three month average rain fall calculator.\n";
    cout << "Program 2: Volume calculator for a three dimensional orthotope.\n";
    cout << "Program 3: Numeric to Roman numeral converter.\n";
    cout << "Program 4: Geometry calculator.\n";
    cout << "Program 5: Distance traveled calculator.\n";
    cout << "Press 6 to quit.\n" << endl;
    cout << "Please enter a number between 1 and 6: ";
    cin >> USER_CHOICE;
    cout << endl;


    CHOICE_CONV = USER_CHOICE;                                                                                  // Convert char to int

    //cout << CHOICE_CONV;                                                                                      // Test output

    while (CHOICE_CONV < 49 || CHOICE_CONV > 54) {
        
        cout << "Please enter a number between 1 and 6: ";
        cin >> USER_CHOICE;
        CHOICE_CONV = USER_CHOICE;
        cout << endl;
    }
  

    if (CHOICE_CONV == 49) {                                                                                    // Program one call
        program_one();
    }
    if (CHOICE_CONV == 50) {                                                                                    // Program two call
        program_two();      
    }
    if (CHOICE_CONV == 51) {                                                                                    // Program three call
        program_three();
    }
    if (CHOICE_CONV == 52) {                                                                                    // Program four call
        program_four();
    }
    if (CHOICE_CONV == 53) {                                                                                    // Program five call
        program_five();
    }
    if (CHOICE_CONV == 54) {                                                                                    // Quitting message
        cout << "Farewell!\n";
    }
    return 0;
}