// CS 134
// M4T1 - Loops
// Name
// 22 February 2023

/*
Purpose of program is to demonstrate various uses of while.
*/

#include <iostream>

using namespace std;

void say_hello(int count) {
// repeat count times
int i=0;                                 // "index"
while (i < count) {
cout << "Hello #" << i+1 << endl;
i++;                                    // count up
}

return;                                 // for void functions, return is optional (implied)
}

int main() {
// call a function
int times = 0;
cout << "How many times should I say Hello? ";
cin >> times;
say_hello(times);

return 0;
}
