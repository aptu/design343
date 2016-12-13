#ifndef COMEDY_H
#define COMEDY_H
#include "movie.h"
#include <iostream>
using namespace std;

class Comedy : public Movie {

public:

    // Input and output stream
    friend istream &operator>>(istream &in, Comedy & rhs);
    friend ostream &operator<<(ostream &out, const Comedy &rhs);

    bool operator==(const Comedy& rhs) const;
    bool operator<(const Comedy& rhs) const;
    bool operator>(const Comedy& rhs) const;


    void setData();
    void display();
    void borrow(int num);
    void turnIn(int num);


    //========================== Constructor ======================================
    /*
     * Constructor creates a Classic movie.
     * It takes the following arguments:
     * -- stock number
     * -- director
     * -- title
     * -- release year
     *
     * Returns the pointer to this Comedy.
     *
     */
    Comedy (int stock, string director, string title, int year)
        : Movie(stock, director, title, year)
    {}

    // destructor
    ~Comedy() {}

private:
    int stock;
    string director;
    string title;
    int year;
};



#endif // COMEDY_H
