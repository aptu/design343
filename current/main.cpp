#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "customer.h"
#include "hashTable.h"

HashTable<int, Customer> customerHashTable;

void buildMovies();
void buildCustomers();
void processTrans();
vector<string> split(string line, char dlm);

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
            int id = stoi(tokens[0]);
            Customer c(id, tokens[1], tokens[2]);
          //  customerHashTable.put(id, c);
        }
        customerFile.close();
    } else {
        cerr << "Could not open customer file" << endl;
        exit(1);
    }

}

void buildMovies() {
    string line;
    ifstream movieFile("/Users/olga/workspace/school/repos/design343/current/data4movies.txt");
    vector<string> tokens;
    if (movieFile.is_open()) {
        while (getline (movieFile,line)) {
            tokens = split(line, ',');

        }
        for(std::vector<string>::iterator it = tokens.begin(); it != tokens.end(); ++it) {
            std::cout << *it << endl;
        }
        movieFile.close();
    } else {
        cerr << "Could not open customer file" << endl;
        exit(1);
    }

}
