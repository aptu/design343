// ------------------------------------------------ binTree.h --------------------------------------------------------
// Olga Rocheeva CSS343 Fall 2016
// --------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include "../movie.h"
using namespace std;

#ifndef BINTREE_H
#define BINTREE_H

class BinTree {
public:
    BinTree();                                // constructor
    BinTree(const BinTree&);                // copy constructor
    ~BinTree();                                // destructor, calls makeEmpty
    BinTree& operator=(const BinTree&);
    bool isEmpty() const;                    // true if tree is empty, otherwise false
    void makeEmpty();                        // make the tree empty so isEmpty returns true
    bool operator==(const BinTree&) const;
    bool operator!=(const BinTree&) const;
    friend ostream& operator<<(ostream& output, const BinTree& b);
    bool insert(Movie* movie);
    bool retrieve(const Movie&, Movie*&) const;
    void displaySideways() const;            // provided below, displays the tree sideways
    void bstreeToArray(Movie**);
    void arrayToBSTree(Movie**);
    int getHeight(const Movie&) const;

private:
    struct Node {
        Movie* movie;                        // pointer to data object
        Node* left;                            // left subtree pointer
        Node* right;                        // right subtree pointer
    };
    Node* root;                                // root of the tree

// utility functions
    void inorderHelper(Node* node) const;
    void sideways(Node*, int) const;            // provided below, helper for displaySideways()
    bool insertHelper(Node* node, Movie* data);
    bool retrieveHelper(Node* node, const Movie& data, Movie*& found) const;
    bool equalityHelper(BinTree::Node* node, BinTree::Node* rhsNode) const;
    Node* makeNewNode(Movie* data);
    void copyHelper(BinTree::Node*& node, BinTree::Node* pNode);
    void makeEmptyHelper(Node*& node);
    void bstreeToArrayHelper(Node* node, Movie** array, int& subscript);
    void arrayToBSTree(Movie** array, Node*& leaf, int low, int high);
    int maxDepth(const Node* node, int level) const;
    int getHeightHelper(const Movie& data, Node* node, int level, Node*& found) const;
};

#endif
