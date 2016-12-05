#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using namespace std;

class Movie {

public:
    virtual Movie operator < (const Movie& rhs) const;
    virtual Movie operator ==(const Movie& rhs) const;
    virtual void setData();
    virtual void display();
    virtual void borrow();
    virtual void turnin(); // because teturn is a keyword

protected:
    // constructor
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
