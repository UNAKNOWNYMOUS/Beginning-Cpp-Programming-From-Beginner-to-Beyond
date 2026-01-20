// TODO: Do extra tasks for this challenge
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main() {
  std::vector<int> list{};
  char choice{};

  do {
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;

    cin >> choice;

    switch (choice) {
    case 'P':
    case 'p': {
      if (list.empty()) {
        cout << "[] - the list is empty" << endl;
      } else {
        cout << "[ ";
        for (auto number : list) {
          cout << number << " ";
        }
        cout << "]" << endl;
      }
      break;
    }
    case 'A':
    case 'a': {
      int number{};
      cout << "Enter an integer to add to the list: ";
      cin >> number;
      list.push_back(number);
      cout << number << " added" << endl;
      break;
    }
    case 'M':
    case 'm': {
      if (list.empty()) {
        cout << "Unable to calculate the mean - no data" << endl;
      } else {

        double average{};
        for (auto number : list) {
          average += number;
        }
        average /= list.size();
        cout << "The mean is: " << average << endl;
      }
      break;
    }
    case 'S':
    case 's': {
      if (list.empty()) {
        cout << "Unable to determine the smallest number - list is empty"
             << endl;
      } else {
        int smallest{list.at(0)};
        for (auto number : list) {
          if (number < smallest) {
            smallest = number;
          }
        }
        cout << "The smallest number is " << smallest << endl;
      }
      break;
    }
    case 'L':
    case 'l': {
      if (list.empty()) {
        cout << "Unable to determine the smallest number - list is empty"
             << endl;
      } else {
        int largest{list.at(0)};
        for (auto number : list) {
          if (number > largest) {
            largest = number;
          }
        }
        cout << "The largest number is " << largest << endl;
      }
      break;
    }
    case 'Q':
    case 'q': {
      cout << "Goodbye" << endl;
      break;
    }
    default: {
      cout << "Unknown selection, please try again" << endl;
    }
    }

  } while (choice != 'Q' && choice != 'q');

  return 0;
}
