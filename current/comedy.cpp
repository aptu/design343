#include "comedy.h"
#include <iostream>
using namespace std;
#include "movie.h"



//TODO: do we need cin????S
// Input and output stream
/*
 * Overloads the input stream operator to input the
 * Comedy data.
 *
 * Returns a reference to output stream.
 */
istream &operator >> (istream &in, Comedy & rhs) {
    int stock, year;
    string director, title;
}
/*
 * Overloads the outoutstream operator to output the
 * Comedy data.
 * Returns a reference to output stream.
 */
ostream& operator << (ostream &out, const Comedy &rhs) {
    const Movie& movie = rhs;
    out << movie << endl;
}


/*
 * Overloads the comparison operator.
 * Returns true if this implicit Comedy is equal to the
 * rhs argument. Returns false otherwise.
 *
 * To define equality, first checks title, then checks release
 * year.
 * Data has the following format:
 * -- Director, Title, Release year.
 *
 */
bool Comedy::operator ==(const Comedy& rhs) const {
    return this->title == rhs.title && this->year == rhs.year;
}

/*
 * Overloads the less than operator.
 * Returns true if this implicit Comedy is less than
 * the rhs argument. Returns false otherwise.
 *
 * Checks:
 * -- title and then release year
 *          to define less than relation.
 */
bool Comedy::operator < (const Comedy& rhs) const {

    if (this->title < rhs.title) {
        return true;
    }

    if (this->title == rhs.title ) {
        if (this->year < rhs.year) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        // this->title > rhs.title
        return false;
    }

}

/*
 * Overloads the greater than operator.
 * Returns true if this implicit Comedy is greater than
 * the rhs argument. Returns false otherwise.
 *
 * Checks:
 * - title and then release year
 *          to define greater than relation.
 */
bool Comedy::operator > (const Comedy& rhs) const {
    return !(*this == rhs) && !(*this < rhs);
}

/*
 *TODO: I AM NOT SURE WHAT TO SAY HERE YET.Construct??? or just edit one field???
 * I assume that the only field we have to edit is stock for now.
 */
void Comedy::setData(/*int stock, string director, string title, int year*/) {
    Comedy classic_movie(int stock, string director, string title, int year);
}


/*
 * Displays the information of this Comedy using
 * the following format:
 * -- Director, Title, Release year.
 * Example:
 * -- Nora Ephron, You've Got Mail, 1998.
 *
 */
void Comedy::display() {
    cout << *this;
}


/*
 *
 */
void Comedy::borrow(int num) {
    if ( this->stock >= num) {
        this->stock -= num;
    }
    else {
        cerr << "There are only " << this->stock << "movies called " << this->title << endl;
    }
}


/*
 *
 */
void Comedy::turnIn(int num) {
    this->stock += num;
}
