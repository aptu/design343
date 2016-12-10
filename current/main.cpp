#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "customer.h"
#include "hashTable.h"
#include "BST/binTree.h"

HashTable<int, Customer> customerHashTable;
BinTree comedyTree;
BinTree classicTree;
BinTree dramaTree;


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
            customerHashTable.put(id, c);
        }
        customerFile.close();
    } else {
        cerr << "Could not open customer file" << endl;
        exit(1);
    }

}

/**
* For comedy movies: F, Stock, Director, Title, Year it released
* For drama movies: D, Stock, Director, Title, Year it released
* For classics movies: C, Stock, Director, Title, Major actor Release date
 */
void buildMovies() {
    string line;
    ifstream movieFile("/Users/olga/workspace/school/repos/design343/current/data4movies.txt");
    vector<string> tokens;
    vector<string> lastField;
    if (movieFile.is_open()) {
        while (getline (movieFile,line)) {
            tokens = split(line, ',');
            switch(tolower(*tokens[0].c_str())){
                case 'c':
                    // lastField = split(tokens[4], ' ');
                    // Classic classic(stoi(tokens[0]), tokens[1], tokens[2], lastField[0], lastField[1]);
                   // classicTree.insert(classic);
                    continue;
                case 'f':
                    continue;
                case 'd':
                    continue;
                default:
                    cout << "INVALID MOVIE TYPE " <<  *tokens[0].c_str() << endl;
                    continue;
            }

        }
        movieFile.close();
    } else {
        cerr << "Could not open movie file" << endl;
        exit(1);
    }

}
