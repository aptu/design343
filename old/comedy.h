// Comedy class declaration

#include "movie.h"

#ifndef COMEDY_H
#define COMEDY_H

class Comedy : public Movie {
public:
	Comedy();
	Comedy(int stock, string dir, string mov, int year);
	void display() const;
};
#endif
