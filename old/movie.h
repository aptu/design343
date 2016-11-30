// Movie class declaration
#include "item.h"
using namespace std;

#ifndef MOVIE_H
#define MOVIE_H

class Movie : public Item {
public:
	Movie();
	Movie(Item);
	Movie(int stock, string director, string title, int releaseYear);
	string getDirector() const;	// returns movie director
	string getTitle() const;	// returns movie title
	int getReleaseYear() const;	// returns release year
	void setDirector(string director);	// assigns director value
	void setTitle(string title);		// assigns title value
	void setReleaseYear(int year);	// assigns release year value
    bool virtual operator == (Movie& rhs) const;
    bool virtual operator != (Movie& rhs) const;
    bool virtual operator > (Movie& rhs) const;
    bool virtual operator < (Movie& rhs) const;
protected:
	string director;
	string title;
	int releaseYear;
};

#endif