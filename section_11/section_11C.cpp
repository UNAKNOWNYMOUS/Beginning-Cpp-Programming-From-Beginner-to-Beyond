#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

void print_menu();
void print_numbers(std::vector<int> &list);
void add_number(std::vector<int> &list);

int main() {
  std::vector<int> numbers{};
  char choice{};

  do {
    print_menu();

    cin >> choice;

    if (choice == 'p' || choice == 'P') {
      print_numbers(numbers);
    } else if (choice == 'a' || choice == 'A') {
      add_number(numbers);
    } else if (choice == 'm' || choice == 'M') {
      calculate_mean()
    }

  } while (choice != 'Q' && choice != 'q');

  return 0;
}

void print_menu() {
  cout << "P - Print numbers" << endl;
  cout << "A - Add a number" << endl;
  cout << "M - Display mean of the numbers" << endl;
  cout << "S - Display the smallest number" << endl;
  cout << "L - Display the largest number" << endl;
  cout << "Q - Quit" << endl;
}

void print_numbers(std::vector<int> &list) {
  if (list.empty()) {
    cout << "[] - the list is empty" << endl;
  } else {
    cout << "[ ";
    for (auto number : list) {
      cout << number << " ";
    }
    cout << "]" << endl;
  }
}

void add_number(std::vector<int> &list) {
  int number{};

  cout << "Enter an integer to add to the list: ";
  cin >> number;

  list.push_back(number);
  cout << number << " added" << endl;
}
