// Anisia West J00972347
// Programming Assignment pg 259 #7

// discriminant = b^2-4ac
// declare a b c
// take input value of a, b, c

#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() 
{
  double a; // double - type, a - variable, ; - terminating statement
  double b;
  double c;
  double disc;
  cout << "Input: ";  // insertion - << (print on screen )
  cin >> a >> b >> c; // extraction - >> (typing on screen)
  cout << endl;
  cout << "Input: "; 
  cin >> a >> b >> c;
  cout << endl;
  cout << "Input: ";
  cin >> a;
  cout << endl;
 disc = pow(b,2) - (4 * a * c);
  if (a == 0) {
        cout << "Invalid";
        return;
    }
 
    int d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));
 
    if (d > 0) {
        cout << "Roots are real and different \n";
        cout << (double)(-b + sqrt_val) / (2 * a) << "\n"
             << (double)(-b - sqrt_val) / (2 * a);
    }
    else if (d == 0) {
        cout << "Roots are real and same \n";
        cout << -(double)b / (2 * a);
    }
    else // d < 0
    {
        cout << "Roots are complex \n";
        cout << -(double)b / (2 * a) << " + i"
             << sqrt_val / (2 * a) << "\n"
             << -(double)b / (2 * a) << " - i"
             << sqrt_val / (2 * a);
      return 0;}
  }
