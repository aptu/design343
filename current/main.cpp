#include <iostream>
#include <fstream>
using namespace std;

void buildMovies();
void buildCustomers();
void processTrans();

int main(){
    string line;
    ifstream movieFile("/Users/olga/workspace/school/repos/design343/current/data4customers.txt");
    if (movieFile.is_open()) {
        while (getline (movieFile,line)) {
            cout << line << '\n';
        }
        movieFile.close();
    } else {
        cout << "File not open 4" << endl;
    }
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
