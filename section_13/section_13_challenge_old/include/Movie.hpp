#ifndef _MOVIE_HPP_
#define _MOVIE_HPP_

#include <string>

class Movie {
public:
  Movie(std::string name = "None", std::string rating = "None",
        int watched = 0);
  Movie(const Movie &object);
  ~Movie();
  void display() const;
  void increment_watched() { watched++; }
  void set_name(std::string name) { this->name = name; }
  std::string get_name() const { return name; }
  void set_rating(std::string rating) { this->rating = rating; }
  std::string get_rating() const { return rating; }
  void set_watched(int watched) { this->watched = watched; }
  int get_watched() const { return watched; }

private:
  std::string name;
  std::string rating;
  int watched;
};
#endif
