#include <iostream>

using std::cout;
using std::endl;

void print(const int *const array, const size_t size);
int *apply_all(const int *const array1, const size_t array1_size,
               const int *const array2, const size_t array2_size);

int main() {
  const size_t array1_size{5};
  const size_t array2_size(3);

  int array1[]{1, 2, 3, 4, 5};
  int array2[]{10, 20, 30};

  cout << "Array 1: ";
  print(array1, array1_size);

  cout << "Array 2: ";
  print(array2, array2_size);

  int *results = apply_all(array1, array1_size, array2, array2_size);
  constexpr size_t results_size{array1_size * array2_size};

  cout << "Result ";
  print(results, results_size);

  cout << endl;

  delete[] results;

  return 0;
}

void print(const int *const array, const size_t size) {
  cout << "[ ";
  for (size_t i{0}; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << "]" << endl;
}

int *apply_all(const int *const array1, const size_t array1_size,
               const int *const array2, const size_t array2_size) {
  int *return_array = new int[array1_size * array2_size];
  size_t counter{};
  for (size_t i{0}; i < array2_size; i++) {
    for (size_t j{0}; j < array1_size; j++) {
      return_array[counter++] = array1[j] * array2[i];
    }
  }
  return return_array;
}
