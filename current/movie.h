#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

/*
 * Movie class is a base class for different types of Movies.
 * Movie class defines the general behavior of its subclasses.
 */

class Movie {

public:
    virtual Movie operator < (const Movie& rhs) const;
    virtual Movie operator ==(const Movie& rhs) const;
    virtual void setData();
    virtual void display();
    virtual void borrow();
    virtual void turnIn(); // because return is a keyword

protected:
    // constructor
    // TODO: why is the year an unsigned int?
    Movie(int stock, string director, string title, unsigned int year)
        : stock(stock),
          director(director),
          title(title),
          year(year)
    {}

private:
    int stock;
    string director;
    string title;
    unsigned int year;
};

#endif // MOVIE_H
