// CSC 134
// M5T1 - Basic Functions
// Name
// 13 March 2023

/*
Purpose: To use a few void and value returning functions
We can either define our functions before we need them.
or declare them all at the top.
The second option is cleaner.
So, we put all the "functions signatures" up top, above main.
*/

#include <iostream>

using namespace std;

void say_hello();                                  // Prints hello
int double_a_number(int num);                      // Returns number times 2
int add(int num1, int num2);                       // Returns sum of 2 ints


int main()
{
    //cout << "Hello world!" << endl;
    say_hello();
    int num = double_a_number(2);
    return 0;
}

void say_hello() {
    // Just print hello to stdout
    cout << "Hello!" << endl;
    double my_num = 3;
    cout << my_num << " doubled is: " << double_a_number(my_num) << endl;
    cout << "Give me two ints: ";
    int first;
    int second;
    cin >> first >> second;
    int sum = add(first,second);
    cout << first << " + " << second << " = ";
    cout << sum << endl;

    return;                                         // A void returns is implied (you can leave it out)
}
int double_a_number(int num) {
/*
Input: any integer
Output: the int times two
*/
//return num*2;                                    // Displays num *2
    int answer = num * 2;
    return answer;
}
int add(int num1, int num2) {
/*
Input: two integers
Output: their sum
*/
    int sum = num1 + num2;

}
