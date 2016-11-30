// Drama class declaration
#include "movie.h"

class Drama : public Movie {
public:
	Drama(string director, string title, int releaseYear):
            director(director), movie(movie), releaseYear(releaseYear){};
	void display() const;
};