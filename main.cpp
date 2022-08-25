
#include <iostream>

using namespace std;

int sum (int n);

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
