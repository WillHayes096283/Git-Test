/**
 * @file main.cpp
 * @author William Hayes
 * @date 2022-08-25
 * @brief This program allows the user to enter an integer and it prints out
 * the integer's factorial sum and product.
 * 
 * The take an integer as a input and prints out the factorial sum and product
 * of said integer.
 */


#include <iostream>

using namespace std;


/**
 * This function calculates the factorial sum for some integer
 *
 * @param int n the integer the user wants to get the factorial sum of
 * @pre n has to be an integer greater than 0
 * @return int the factorial sum of n
 * 
 */
int sum (int n);


/**
 * This function calculates the factorial product some integer
 *
 * @param int n the integer the user wants to get the factorial product of
 * @pre n has to be an integer greater than 0
 * @return int the factorial product of n
 * 
 */
int prod (int n);

int main() {
  int n = 0;

  int temp = 0;
  
  cout << "Hello World!" << endl;

  cout << "Enter an integer: ";

  cin >> n;

  temp = sum(n);

  cout << "Sum of integer: " << temp << endl;

  temp = prod(n);

  cout << "Product of integer: " << temp << endl;
  
  return 0;
}

int sum (int n) {
  if (n == 1) {
    return n;
  }
  
  return n + sum(n - 1);
  
}

int prod (int n) {
  if (n == 1) {
    return n;
  }

  return n * prod(n - 1);
}
