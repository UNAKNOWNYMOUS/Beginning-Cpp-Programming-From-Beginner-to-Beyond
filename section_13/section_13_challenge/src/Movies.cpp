#include "Movies.hpp"
#include <iostream>

/* Constructor */
Movies::Movies() : list{} {}

/* Destructor */
Movies::~Movies() {}

void Movies::display() const {
  if (list.empty()) {
    std::cout << "List is empty!" << std::endl;
  } else {
    std::cout << "----------" << std::endl;
    for (auto &object : list) {
      object.display();
    }
    std::cout << "----------" << std::endl;
  }
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
  list.push_back(Movie{name, rating, watched});
  return true;
}

bool Movies::increment_watched(std::string name) {
  for (auto &object : list) {
    if (object.get_name() == name) {
      int current_watched = object.get_watched();
      object.set_watched(++current_watched);
      return true;
    }
  }
  return false;
}
