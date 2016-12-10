#ifndef CLASSIC_H
#define CLASSIC_H
#include <movie.h>
#include <iostream>

class Classic : public Movie {

public:

    // Input and outputstream
    friend istream &operator >> ( istream &in,        Classic & rhs);
    friend ostream &operator << ( ostream &out, const Classic &rhs);

    bool operator ==(const Classic& rhs) const;
    bool operator < (const Classic& rhs) const;
    bool operator > (const Classic& rhs) const;


    void setData();
    void display();
    void borrow();
    void turnin();


    //========================== Constructor ======================================
    /*
     * Constructor creates a Comedy movie.
     * It takes the following arguments:
     * -- stock number
     * -- director
     * -- title
     * -- major actor
     * -- release date
     * Release date has the format: Year Month,
     * example: 19389, where 1938 is year, 9 is month.     *
     * Returns the pointer to this Comedy.
     *
     */
    Classic (int stock, string director, string title, string actor, int month, int year)
        : Movie(stock, director, title, year),
          actor(actor), month(month)
    {}

    // destructor
    ~Classic() {}

private:
    string actor;
    int year;
    int month;


};


#endif // CLASSIC_H
