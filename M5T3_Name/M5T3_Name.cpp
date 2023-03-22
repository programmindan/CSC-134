// CSC 134
// M5T3
// Name
// 22 March 2023

/*
Part 1
Create an array containing 6 integers.
Iterate through the array, printing each value.
When done, print the total of all the numbers.

Part 2
Instead of hard coding the array contents,
use a loop and cin to let the user enter the six values.
Print: Each value, the total, the average, the maximum,
and the minimum values.

Part 3
Allow the user to choose how large the array should be.
(They can pick any size from 1 to 20.)
Ensure the program works for different size arrays.
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Arrays In Use\n";

    cout << "Part 1" << endl;
    const int SIZE = 6;
    int stats[SIZE] = {17 ,13, 7, 6, 14, 5};
    int total = 0;

    // loop through, find the total
    for (int i = 0; i < SIZE; i++) {
        cout << stats[i] << ", ";
        total += stats[i];
    }
    cout << endl;
    cout << "Total = " << total << endl << endl;

    cout << "Part 2 - User Input" << endl;

    // Ask for values
    // Find : Total, average, max, and min
    int values[SIZE];                                           // This initializes each value to UNDEFINED
    int total_values = 0;                                       // Sets ints to zero
    int average, min, max;

    // Let user enter values
    for (int i = 0; i < SIZE; i++) {
    cout << "Enter value #" << i + 1 << ": ";
    cin >> values[i];
    }
    // Print values, find stats
    // Initialize max, min to good values (TODO)
    max = min = values[0];
    for ( int value : values) {
        cout << value << endl;
        total_values += value;
        if (value > max) {
            max = value;                                        // Update max (so far) if needed
        }
        if (value < min) {
            min = value;                                        // Update min (so far) if needed
        }
        //cout << " max so far= " << max << ", min so far= " << min << endl; // Debug statement
    }
average = total_values / SIZE;
cout << "Total = " << total_values << endl;
cout << "Average = " << average << endl;
cout << "Min Value = " << min << endl;
cout << "Max Value = " << max << endl;

// PART 3: TODO

    return 0;

}
