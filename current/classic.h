#ifndef CLASSIC_H
#define CLASSIC_H

class Classic : public Movie{

public:
    Classic operator < (const Classic& rhs) const;
    Classic operator ==(const Classic& rhs) const;
    void setData();
    void display();
    void borrow();
    void turnin(); // because return is a keyword

protected:
    // constructor

    Classic (string actor_release): movie(stock, director, title), actor_release(actor_release)
    {}

private:
    string actor_release;




    // Input and outputstream
    //friend istream &operator >> ( istream &in,        Poly &rhs);
    //friend ostream &operator << ( ostream &out, const Poly &rhs);
};


#endif // CLASSIC_H
