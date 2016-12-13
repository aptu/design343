#ifndef DRAMA_H
#define DRAMA_H
#include "movie.h"
#include <iostream>
using namespace std;

class Drama : public Movie {

public:

    // Input and output stream
    friend istream &operator>>(istream &in, Drama & rhs);
    friend ostream &operator<<(ostream &out, const Drama &rhs);

    bool operator==(const Drama& rhs) const;
    bool operator<(const Drama& rhs) const;
    bool operator>(const Drama& rhs) const;


    void setData();
    void display();
    void borrow(int num);
    void turnIn(int num);


    //========================== Constructor ======================================
    /*
     * Constructor creates a Drama movie.
     * It takes the following arguments:
     * -- stock number
     * -- director
     * -- title
     * -- release year
     *
     * Returns the pointer to this Drama.
     *
     */
    Drama (int stock, string director, string title, int year)
        : Movie(stock, director, title, year)
    {}

    // destructor
    ~Drama() {}

private:
    int stock;
    string director;
    string title;
    int year;
};

#endif // DRAMA_H
