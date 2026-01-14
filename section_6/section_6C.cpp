#include <iostream>

int main() {
  int small_rooms{0};
  std::cout << "\nHello, welcome to Frank's Carpet Cleaning Service"
            << std::endl;

  int large_rooms{0};
  std::cout << "\nHow many small rooms would you like cleaned? ";
  std::cin >> small_rooms;

  std::cout << "How many large rooms would you like cleaned? ";
  std::cin >> large_rooms;

  const double small_room_rate{25};
  const double large_room_rate{35};
  const double tax{0.06};
  const int expiry{30};
  int total = (small_room_rate * small_rooms) + (large_room_rate * large_rooms);

  std::cout << "\nEstimate for carpet cleaning service" << std::endl;
  std::cout << "Number of small rooms: " << small_rooms << std::endl;
  std::cout << "Number of large rooms: " << large_rooms << std::endl;
  std::cout << "Price per small room: $" << small_room_rate << std::endl;
  std::cout << "Price per large room: $" << large_room_rate << std::endl;
  std::cout << "Cost: $" << total << std::endl;
  std::cout << "Tax: $" << total * tax << std::endl;
  std::cout << "==================================" << std::endl;
  std::cout << "Total estimate: $" << total + (total * tax) << std::endl;
  std::cout << "This estimate is valid for " << expiry << " days" << std::endl;

  return 0;
}
