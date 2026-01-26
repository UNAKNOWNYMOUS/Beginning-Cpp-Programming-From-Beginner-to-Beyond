#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main() {
  string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key{"jZPqTHloSdbzxRQwgfakuELsKtCmIMrAWDnVeBhpGNcOvYXyFJiU"};

  string message{};
  cout << "Enter your secret message: ";
  getline(cin, message);

  string new_message{};
  cout << "Encrypting message..." << endl;
  for (auto c : message) {
    size_t pos{alphabet.find(c)};
    if (pos != string::npos) {
      new_message.push_back(key.at(pos));
    } else {
      new_message.push_back(c);
    }
  }
  cout << "Encrypted message: " << new_message << endl;

  cout << "Decrypting message..." << endl;
  string original_message{};
  for (auto c : new_message) {
    size_t pos{key.find(c)};
    if (pos != string::npos) {
      original_message.push_back(alphabet.at(pos));
    } else {
      original_message.push_back(c);
    }
  }
  cout << "Decrypted message: " << original_message << endl;

  return 0;
}
