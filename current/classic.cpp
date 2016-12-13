#include "classic.h"
#include <iostream>
using namespace std;
#include "movie.h"




// Input and output stream
/*
 * Overloads the input stream operator to input the
 * Classic data.
 *
 * Returns a reference to output stream.
 */
istream &operator >> (istream &in, Classic & rhs) {

}
/*
 * Overloads the outoutstream operator to output the
 * Classic data.
 * Returns a reference to output stream.
 */
ostream& operator << (ostream &out, const Classic &rhs) {
    const Movie& movie = rhs;
    out << movie << ' '
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
    return this->year == rhs.year && this->month == rhs.month && this->actor == rhs.actor;
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

    if (this->year < rhs.year) {
        return true;
    }

    if (this->year == rhs.year ) {
        if (this->month < rhs.month) {
            return true;
        }
        else if (this->month == rhs.month) {
            if (this->actor < rhs.actor) {
            return true;
            }
            else {
                return false;
            }
        }
    }
    else {
        // this->year > rhs.year
        return false;
    }

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
    return !(*this == rhs) && !(*this < rhs);
}

/*
 *TODO: I AM NOT SURE WHAT TO SAY HERE YET.Construct??? or just edit one field???
 * I assume that the only field we have to edit is stock for now.
 */
void Classic::setData(/*int stock, string director, string title, string actor, int month, int year*/) {
    Classic classic_movie(int stock, string director, string title, string actor, int month, int year);
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
    cout << *this;
}


/*
 *
 */
void Classic::borrow(int num) {
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
