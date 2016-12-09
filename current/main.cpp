#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "customer.h"

using namespace std;

void buildMovies();
void buildCustomers();
void processTrans();

vector<string>  split(string line, char delimeter);

int main(){
    string line;
    ifstream customerFile("/Users/olga/workspace/school/repos/design343/current/data4customers.txt");
    vector<string> tokens;
    Customer bob(1, "robinson", "bob");
    if (customerFile.is_open()) {
        while (getline (customerFile,line)) {
            tokens = split(line, ' ');
            // Customer c(stoi(tokens[0]), tokens[1], tokens[2]);
        }
        customerFile.close();
    } else {
        cout << "File not open" << endl;
    }
    buildMovies();
    buildCustomers();
    processTrans();
}

vector<string> split(string line, char delimeter) {
    stringstream stream;
    stream.str(line);
    string token;
    vector<string> tokens;
    while(getline(stream, token, delimeter)){
       // cout << "pushing token " << token << endl;
        tokens.push_back(token);
    }
    return tokens;
}

void processTrans() {

}

void buildCustomers() {

}

void buildMovies() {

}
