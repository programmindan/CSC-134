#include <iostream>
#include <iomanip>
using namespace std;
//CSC 134
//M5LAB2
//Name
//3/27/2023


// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();                                   // Global double for getLength
double getWidth();                                    // Global double for getWidth
double getArea(double& l, double& w);                 // Global double for getArea using l & w
void displayData(double& l, double& w, double& a);    // Global for displaying l, w, & a
double length;                                        // Global to store length
double width;                                         // Global to store width

int main()
{

  double length,                        // Double for length           
         width,                         // Double for width
         area;                          // Double for area
          
   // Get the rectangle's length.
  length = getLength();
     
   // Get the rectangle's width.
  width = getWidth();
   
   // Get the rectangle's area.
  area = getArea(length, width);
   
   // Display the rectangle's data.
  displayData(length, width, area);
  
}        
  
// Define Functions Below
// Request length input from user
double getLength() {
  // Input: None                     Ouput: Length
  cout << "Please enter the rectangle's length: ";
  cin >> length;
  cout << endl;
  return length;
}
// Request width input from user
double getWidth() {
  // Input: None                     Output: Width
  cout << "Please enter the rectangle's width: ";
  cin >> width;
  cout << endl;
  return width;
}
// Calculate area of rectangle
double getArea(double& l, double& w) {
  // Input: length, width            Output: length * width
  return length*width;
}
// Displays rectangle's length, width, and area
void displayData (double& l, double& w, double& a) {
  // Input: length, width, area     Output: Displays labelled data
  cout << "Length: " << fixed << setprecision (2) << l << endl << "Width: " << w << endl << "Area: " << a << endl;
}


