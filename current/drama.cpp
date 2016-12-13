#include "drama.h"
#include <iostream>
using namespace std;
#include "movie.h"




/*
 * Overloads the input stream operator to input the
 * Comedy data.
 *
 * Returns a reference to output stream.
 */
istream &operator >> (istream &in, Drama & rhs) {
    int stock, year;
    string director, title;
}
/*
 * Overloads the outoutstream operator to output the
 * Drama data.
 * Returns a reference to output stream.
 */
ostream& operator << (ostream &out, const Drama &rhs) {
    const Movie& movie = rhs;
    out << movie << endl;
}


/*
 * Overloads the comparison operator.
 * Returns true if this implicit Drama is equal to the
 * rhs argument. Returns false otherwise.
 *
 * To define equality, first checks director, then checks title.
 * Data has the following format:
 * -- Director, Title, Release year.
 *
 */
bool Drama::operator ==(const Drama& rhs) const {
    return this->director == rhs.director && this->title == rhs.title;
}

/*
 * Overloads the less than operator.
 * Returns true if this implicit Drama is less than
 * the rhs argument. Returns false otherwise.
 *
 * Checks:
 * -- director and then title
 *          to define less than relation.
 */
bool Drama::operator < (const Drama& rhs) const {

    if (this->director < rhs.director) {
        return true;
    }

    if (this->director == rhs.director ) {
        if (this->title < rhs.title) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        // this->director > rhs.director
        return false;
    }

}

/*
 * Overloads the greater than operator.
 * Returns true if this implicit Drama is greater than
 * the rhs argument. Returns false otherwise.
 *
 * Checks:
 * - director and then title
 *          to define greater than relation.
 */
bool Drama::operator > (const Drama& rhs) const {
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
