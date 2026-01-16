#include <iostream>

int main() {
  int const dollar{100};
  int const quarter{25};
  int const dime{10};
  int const nickel{5};
  int const penny{1};

  int change{};

  std::cout << "Enter an amount in cents: ";
  std::cin >> change;

  std::cout << "You can provide change for this change as follows: "
            << std::endl;

  /* Do stuff */
  int temp{};

  /* dollar */
  temp = change / dollar;
  change = change - temp * dollar;
  std::cout << "dollars: " << temp << std::endl;

  /* quarter */
  temp = change / quarter;
  change = change - temp * quarter;
  std::cout << "quarters: " << temp << std::endl;

  /* dimes */
  temp = change / dime;
  change = change - temp * dime;
  std::cout << "dime: " << temp << std::endl;

  /* nickels */
  temp = change / nickel;
  change = change - temp * nickel;
  std::cout << "nickels: " << temp << std::endl;

  /* pennies */
  temp = change / penny;
  change = change - temp * penny;
  std::cout << "pennies: " << temp << std::endl;

  return 0;
}
