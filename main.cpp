
#include <iostream>

using namespace std;

int sum (int n);

int main() {
  int n = 0;

  int temp = 0;
  
  cout << "Hello World!" << endl;

  cout << "Enter an integer: ";

  cin >> n;

  temp = sum(n);

  cout << "Sum of integer: " << temp << endl;
  
  return 0;
}

int sum (int n) {
  int temp = 1 + n;

  return temp;
  
}
