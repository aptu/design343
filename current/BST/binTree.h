// ------------------------------------------------ binTree.h --------------------------------------------------------
// Olga Rocheeva CSS343 Fall 2016
// --------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include "nodedata.h"

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
    bool insert(NodeData* data);
    bool retrieve(const NodeData&, NodeData*&) const;
    void displaySideways() const;            // provided below, displays the tree sideways
    void bstreeToArray(NodeData**);
    void arrayToBSTree(NodeData**);
    int getHeight(const NodeData&) const;

private:
    struct Node {
        NodeData* data;                        // pointer to data object
        Node* left;                            // left subtree pointer
        Node* right;                        // right subtree pointer
    };
    Node* root;                                // root of the tree

// utility functions
    void inorderHelper(Node* node) const;
    void sideways(Node*, int) const;            // provided below, helper for displaySideways()
    bool insertHelper(Node* node, NodeData* data);
    bool retrieveHelper(Node* node, const NodeData& data, NodeData*& found) const;
    bool equalityHelper(BinTree::Node* node, BinTree::Node* rhsNode) const;
    Node* makeNewNode(NodeData* data);
    void copyHelper(BinTree::Node*& node, BinTree::Node* pNode);
    void makeEmptyHelper(Node*& node);
    void bstreeToArrayHelper(Node* node, NodeData** array, int& subscript);
    void arrayToBSTree(NodeData** array, Node*& leaf, int low, int high);
    int maxDepth(const Node* node, int level) const;
    int getHeightHelper(const NodeData& data, Node* node, int level, Node*& found) const;
};

#endif
