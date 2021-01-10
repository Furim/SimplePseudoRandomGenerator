#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Type a number to get pseudorandom int: "; 
  cin >> x; 
  cout << "Your random int is: " << x / 3 + x * x / 7;
  return 0;
}