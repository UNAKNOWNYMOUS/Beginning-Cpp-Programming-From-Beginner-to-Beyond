#include <cstddef>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main() {
  string user_input{};

  cout << "Enter a string to be displayed as a Letter Pyramid: ";
  /* Assuming no spaces from standard input */
  cin >> user_input;

  /* looking for patterns...
   * columns is 2n - 1
   * */
  size_t nrows{user_input.size()};
  for (size_t i{}; i < nrows; i++) {
    size_t nwspaces{nrows - i - 1};
    for (size_t j{}; j < nwspaces; j++) {
      cout << ' ';
    }
    for (size_t k{}; k <= i; k++) {
      cout << user_input.at(k);
    }
    for (size_t l{i}; static_cast<int>(l) - 1 >= 0; l--) {
      cout << user_input.at(l - 1);
    }
    for (size_t m{}; m < nwspaces; m++) {
      cout << ' ';
    }
    cout << endl;
  }

  return 0;
}
