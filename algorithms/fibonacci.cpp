/*
Author: Karol Siegieda

What is the runtime of fibonacci?

*/

#include <iostream>

using namespace std;

int fibonacci(int n) {
  if (n <= 0) return 0;
  else if (n == 1) return 1;
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
  int val = 0;
  cout << "Get the N-th fibonacci number: ";
  cin >> val;
  cout << " " << val << endl;

  int fib = fibonacci(val);
  cout << "Found value: " << fib << endl;

  return 0;
}