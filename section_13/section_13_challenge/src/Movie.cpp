#include "Movie.hpp"
#include <iostream>

/* Constructor */
Movie::Movie(std::string name, std::string rating, int watched)
    : name{name}, rating{rating}, watched{watched} {}

/* Copy Constructor - Delegating to Constructor */
Movie::Movie(const Movie &object)
    : Movie{object.name, object.rating, object.watched} {}

/* Destructor */
Movie::~Movie() {}

void Movie::display() const {
  std::cout << name << ", " << rating << ", " << watched << std::endl;
}
