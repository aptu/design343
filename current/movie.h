#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <iostream>
using namespace std;

/*
 * Movie class is a base class for different types of Movies.
 * Movie class defines the general behavior of its subclasses.
 */

class Movie {

public:

    //friend istream &operator >> ( istream &in,       Movie & rhs);
    friend ostream &operator << ( ostream &out, const Movie &rhs);

    virtual Movie operator < (const Movie& rhs) const;
    virtual Movie operator ==(const Movie& rhs) const;
    virtual void setData();
    virtual void display();
    virtual void borrow(int n);
    virtual void turnIn(int n); // because return is a keyword

protected:
    // constructor
    Movie(int stock, string director, string title, int year)
        : stock(stock),
          director(director),
          title(title),
          year(year)
    {}

    virtual ~Movie() {}

private:
    int stock;
    string director;
    string title;
    int year;
};

// Input and outputstream
//istream &operator >> ( istream &in,        Movie & rhs) {
   // in >> rhs.director >> rhs.title >> rhs.year;
//}

ostream &operator << ( ostream &out, const Movie &rhs) {
    out << rhs.director << ' ' << rhs.title << ' ' << rhs.year << endl;
}

#endif // MOVIE_H
