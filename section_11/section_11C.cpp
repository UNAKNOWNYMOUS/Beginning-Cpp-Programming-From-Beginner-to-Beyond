#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

void print_menu();
void print_numbers(std::vector<int> &list);
void add_number(std::vector<int> &list);
void calculate_mean(std::vector<int> &list);
void find_smallest(std::vector<int> &list);
void find_largest(std::vector<int> &list);

int main() {
  std::vector<int> numbers{};
  char choice{};

  do {
    print_menu();

    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 'p' || choice == 'P') {
      print_numbers(numbers);
    } else if (choice == 'a' || choice == 'A') {
      add_number(numbers);
    } else if (choice == 'm' || choice == 'M') {
      calculate_mean(numbers);
    } else if (choice == 's' || choice == 'S') {
      find_smallest(numbers);
    } else if (choice == 'l' || choice == 'L') {
      find_largest(numbers);
    } else if (choice == 'q' || choice == 'Q') {
      cout << "Goodbye" << endl;
    } else {
      cout << "Unknown selection, please try again" << endl;
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

void calculate_mean(std::vector<int> &list) {
  if (list.empty()) {
    cout << "Unable to calculate the mean - no data" << endl;
  } else {
    double mean{};
    for (auto number : list) {
      mean += number;
    }
    mean /= list.size();
    cout << "The mean is: " << mean << endl;
  }
}

void find_smallest(std::vector<int> &list) {
  if (list.empty()) {
    cout << "Unable to determine the smallest number - list is empty" << endl;
  } else {
    int smallest{list.at(0)};
    for (auto number : list) {
      if (number < smallest) {
        smallest = number;
      }
    }
    cout << "The smallest number is " << smallest << endl;
  }
}

void find_largest(std::vector<int> &list) {
  if (list.empty()) {
    cout << "Unable to determine the largest number - list is empty" << endl;
  } else {
    int largest{list.at(0)};
    for (auto number : list) {
      if (number > largest) {
        largest = number;
      }
    }
    cout << "The largest number is " << largest << endl;
  }
}
