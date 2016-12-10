#include "classic.h"
#include <iostream>
using namespace std;




// Input and outputstream
/*
 * Overloads the input stream operator to input the
 * Comedy data.
 *
 * Returns a reference to output stream.
 */
istream &operator >> ( istream &in, Classic & rhs) {

}
/*
 * Overloads the outoutstream operator to output the
 * Comedy data.
 * Returns a reference to output stream.
 */
ostream& operator << ( ostream &out, const Classic &rhs) {
    const Movie& movie = rhs;
    out << movie.director << ' '
        << movie.title << ' '
        << rhs.actor << ' '
        << rhs.month << ' '
        << rhs.year
        << endl;
}


/*
 * Overloads the comparison operator.
 * Returns true if this implicit Classic is equal to the
 * rhs argument. Returns false otherwise.
 *
 * To define equality, first checks:
 * -- the release date;
 * -- then checks the actor.
 * Data has the following format:
 * -- Director, Titile, Major actor release date.
 * Examples:
 * -- Frank Capra, It's a Wonderful Life, Donna Reed 11 1946
 * -- Stanley Kubrick, A Clockwork Orange, Malcolm McDowell 2 1971
 */
bool Classic::operator ==(const Classic& rhs) const {
    if (this->year == rhs.year && this->month == rhs.month && this->actor == rhs.actor) {
            return true;
    }
    return false;
}

/*
 * Overloads the less than operator.
 * Returns true if this implicit Classic is less than
 * the rhs argument. Returns false otherwise.
 *
 * Checks:
 * -- the release date;
 * -- then checks the actor
 *          to define less than relation.
 */
bool Classic::operator < (const Classic& rhs) const {
    if (this->year < rhs.year && this->month < rhs.month && this->actor < rhs.actor) {
            return true;
    }
    return false;
}

/*
 * Overloads the greater than operator.
 * Returns true if this implicit Classic is greater than
 * the rhs argument. Returns false otherwise.
 *
 * Checks:
 * -- the release date;
 * -- then checks the actor
 *          to define greater than relation.
 */
bool Classic::operator > (const Classic& rhs) const {
    if (this->year > rhs.year && this->month > rhs.month && this->actor > rhs.actor) {
            return true;
    }
    return false;
}

/*
 * I AM NOT SURE WHAT TO SEY HERE YET
 */
void Classic::setData() {

}


/*
 * Displays the information of this Comedy using
 * the following format:
 * -- Director, Titile, Major actor release date.
 * Example:
 * -- Frank Capra, It's a Wonderful Life, Donna Reed 11 1946
 *
 */
void Classic::display() {

}


/*
 *
 */
void Classic::borrow() {


}


/*
 *
 */
void Classic::turnin() {

}
