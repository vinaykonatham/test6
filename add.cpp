#include <iostream>
using namespace std;

int main() {

  int first_number, second_number, third_number, sum;
    
  cout << "Enter two integers: ";
  cin >> first_number >> second_number >> third_number;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  sum = first_number + second_number + third_number;

  // prints sum 
  cout << first_number << " + " <<  second_number << " + " <<  third_number << " = " << sum;  