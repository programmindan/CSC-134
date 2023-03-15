// CSC 134
// M5T2
// Name
// 15 March 2023

/*
This program will involve us using some simple functions,
both void and value-returning, to solve this problem:
List the numbers from 1 to 10 along with the squares
of those numbers.

a main() function

a square() function that takes an int, and returns the square of that
int (value returning)

a print_answer() function that prints one line of the answer (void)
*/

#include <iostream>

using namespace std;

// Declarations
int square(int num);                                                    // Returns the square of a given int
void print_answer(int num, int num_squared);                            // One line of the table

int main()
{
    cout << "This program prints a squares table." << endl;
    cout << "Number" << "\t\t" << "Number Squared" << endl;
    int num;
    int num_squared;
    const int SIZE = 10;                                                // Tables goes from 1 to 10
    for (int i = 1; i <= 10; i++) {                                     // Print line "i" of the table
        print_answer(i, square(i));                                     // TODO: fix this
    }
    return 0;
}

    // Definitions
int square(int num) {                                                   // Returns the square of a given int
    int answer = num * num;                                             // Number squared
    return answer;                                                      // Must return an int variable
    }
void print_answer(int num, int num_squared) {                           // Prints one line of the squares table with tabs
    cout << "  " << num << "\t\t" << "      " << num_squared << endl; // For example: "5 25\n"
                                                                        // Return is implied
    }

