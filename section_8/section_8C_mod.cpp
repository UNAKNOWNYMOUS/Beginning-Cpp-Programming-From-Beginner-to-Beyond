#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  const int dollar{100};
  const int quarter{25};
  const int dime{10};
  const int nickel{5};
  const int penny{1};

  int change{};
  cout << "Enter an amount in cents: ";
  cin >> change;

  int quotient;
  cout << "You can provide change for this change as follows:" << endl;

  /* dollar */
  quotient = change / dollar;
  change = change % dollar;
  cout << "dollars: " << quotient << endl;

  /* quarter */
  quotient = change / quarter;
  change = change % quarter;
  cout << "quarters: " << quotient << endl;

  /* dime */
  quotient = change / dime;
  change = change % dime;
  cout << "dimes: " << quotient << endl;

  /* nickel */
  quotient = change / nickel;
  change = change % nickel;
  cout << "nickels: " << quotient << endl;

  /* penny */
  quotient = change / penny;
  change = change % penny;
  cout << "pennies: " << quotient << endl;

  return 0;
}
