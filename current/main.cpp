#include <iostream>
#include <fstream>
using namespace std;

void buildMovies();
void buildCustomers();
void processTrans();

int main(){
    ifstream movieFile;
    movieFile.open("current/data4movies.txt");
    string line;
    getline(movieFile, line);
    cout << "LINE" << line << endl;
    buildMovies();
    buildCustomers();
    processTrans();
}

void processTrans() {

}

void buildCustomers() {

}

void buildMovies() {

}
