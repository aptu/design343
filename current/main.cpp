#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "customer.h"

void buildMovies();
void buildCustomers();
void processTrans();

vector<string>  split(string line, char dlm);

int main(){
    buildMovies();
    buildCustomers();
    processTrans();
}

vector<string> split(string line, char dlm) {
    stringstream stream;
    stream.str(line);
    string token;
    vector<string> tokens;
    while(getline(stream, token, dlm)){
        tokens.push_back(token);
    }
    return tokens;
}

void processTrans() {

}

void buildCustomers() {
    string line;
    ifstream customerFile("/Users/olga/workspace/school/repos/design343/current/data4customers.txt");
    vector<string> tokens;
    if (customerFile.is_open()) {
        while (getline (customerFile,line)) {
            tokens = split(line, ' ');
            // Customer c(stoi(tokens[0]), tokens[1], tokens[2]);
        }
        customerFile.close();
    } else {
        cerr << "Could not open customer file" << endl;
        exit(1);
    }

}

void buildMovies() {

}
