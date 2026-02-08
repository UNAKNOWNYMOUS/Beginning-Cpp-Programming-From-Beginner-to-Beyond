#ifndef _MOVIES_HPP_
#define _MOVIES_HPP_

#include "Movie.hpp"
#include <vector>

class Movies {
public:
  Movies();
  ~Movies();
  void display() const;
  bool increment_watched(std::string name);
  bool add_movie(std::string name, std::string rating, int watched);

private:
  std::vector<Movie> list;
};
#endif
