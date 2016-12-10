// ------------------------------------------------ binTree.cpp -------------------------------------------------------
// binTree is the implementation of a binary search tree.
// Default constructor creates an empty tree. There is also a copy constructor, which makes a deep copy of given tree.
// Methods implemented are:
// ******* Overridden assignment operator
// ******* isEmpty()
// ******* makeEmpty() deletes each node in tree
// ******* Overridden equality and inequality operators
// ******* Overridden ostream << operator
// ******* insert()
// ******* retrieve()
// ******* bstreeToArray();
// ******* arrayToBSTree()
// ******* getHeight();
// --------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------
// --------------------------------------------------------------------------------------------------------------------

#include "binTree.h"
using namespace std;

//-------------------------------------------------CONSTRUCTORS------------------------------------------------------//
/**
 * Default Constructor
 * @return empty tree
 */
BinTree::BinTree() {
    this->root = NULL;
}

/**
 *  Copy Constructor
 * @param other binTree to copy
 * @return copy of other
 */
BinTree::BinTree(const BinTree& other) {
    this->root = NULL;
    copyHelper(root, other.root);
}

//--------------------------------------------OVERLOADED OPERATORS---------------------------------------------------//
/**
 * Assignment operator
 * @param rhs binTree to assign this to
 * @return this
 */
BinTree& BinTree::operator=(const BinTree& rhs) {
    // Do not copy if self-assigning
    if (*this != rhs) {
        makeEmpty();
        copyHelper(root, rhs.root);
    }
    return *this;
}

/**
 * Helper function to copy nodes
 * @param node to be created
 * @param otherNode to be copied from
 */
void BinTree::copyHelper(Node*& node, Node* otherNode) {
    if (otherNode != NULL) {
        node = makeNewNode(otherNode->movie);
        copyHelper(node->left, otherNode->left);
        copyHelper(node->right, otherNode->right);
    }
}
/**
 * Equality operator
 * @param rhs to compare this binTree to
 * @return true if all nodes are the same and in the same place
 */
bool BinTree::operator==(const BinTree& rhs) const {
    return equalityHelper(root, rhs.root);
}

/**
 * Helper function to determine if two binTrees are equal
 * @param node of current binTree
 * @param rhsNode of rhsTree
 * @return true if node's have same data
 */
bool BinTree::equalityHelper(Node* node, Node* rhsNode) const {
    if (node == NULL && rhsNode == NULL) {
        return true;
    }

    // If only one node is NULL, then trees are not equal
    if (node == NULL || rhsNode == NULL) {
        return false;
    }

    // check if data is the same and recursively call method for left and right side
    return node->movie == rhsNode->movie
           && equalityHelper(node->left, rhsNode->left)
           && equalityHelper(node->right, rhsNode->right);
}

/**
 *  Inequality function
 * @param rhs to compare this binTree to
 * @return true if nodes are different or are in different places
 */
bool BinTree::operator!=(const BinTree& rhs) const {
    return !(*this == rhs);
}

/**
 * Checks if binTree is empty.
 * @return true if tree is empty.
 */
bool BinTree::isEmpty() const {
    return root == NULL;
}

/**
 * Friend ostream operator
 * @param output to stream into
 * @param b tree to process
 * @return string showing inorder traversal of tree
 */
ostream& operator<<(ostream& output, const BinTree& b) {
    b.inorderHelper(b.root);
    output << endl;
    return output;
}

/**
 * Helper function to print tree inorder
 * @param node to process
 */
void BinTree::inorderHelper(Node* node) const {
    if (node != NULL) {
        inorderHelper(node->left);
        // TODO: implement printing movie
       // cout << *node->movie << " ";
        inorderHelper(node->right);
    }
}

/**
 * Finds the height of given data in tree.
 * @param data to find
 * @return height from furthest root to node, if it's in tree. 0 if data is not in tree.

 If input is B node, the height would be 3, because the deepest node from B  is Q, and counting up from Q as 1,
 H is 2, and B is 3

               A
              / \
             F  B
            /  / \
           J  H  C
          /  /
         R  Q
        /
       Z
**/
int BinTree::getHeight(const Movie& movie) const {
    if (isEmpty()) {
        return 0;
    }

    Node* found = NULL;
    // find how far down from root data is
    int level = getHeightHelper(movie, root, 0, found);
    if (level == -1) {
        return 0;
    } else {
        // find the max level the tree goes to from the node
        int maxLevel = maxDepth(found, level);
        // the result is the furthest leaf node subtracted from the level of tree, plus one to account for self
        return maxLevel - level + 1;
    }
}

/**
 * Helper function for getHeight()
 * @param data to find
 * @param node that is currently being looked at
 * @param level of the tree
 * @param found is a Node passed by reference if it's in tree
 * @return how far down from root the node is, if it is found. otherwise -1 if not found.
 */
int BinTree::getHeightHelper(const Movie& movie, Node* node, int level, Node*& found) const {
    if (node == NULL) {
        return -1;
    }
//    if (*node->movie == movie) {
//        found = node;
//        return level;
//    } else {
//        // look in left subtree
//        level = getHeightHelper(movie, node->left, level + 1, found);
//        // if found, return the level
//        if (level != -1) {
//            return level;
//        }
//        // otherwise traverse the right subtree
//        level = getHeightHelper(movie, node->right, level + 1, found);
//        return level;
//    }
}

/**
 * Finds the furtherest leaf from the node
 * @param node to find the furthest leaf from
 * @param level that node is on
 * @return level of furthest leaf
 */
int BinTree::maxDepth(const Node* node, int level) const {
    int left = 0, right = 0;
    // if leaf node, current level is deepest level
    if (node->left == NULL && node->right == NULL) {
        return level;
    } else {
        if (node->left != NULL) {
            left = maxDepth(node->left, level + 1);
        }
        if (node->right != NULL) {
            right = maxDepth(node->right, level + 1);
        }
        // return bigger of the two values, between traversing left and right
        return max(left, right);
    }
}

/**
 * Places binTree into an array.
 * @param array to place binTree into. Passed by reference.
 */
void BinTree::bstreeToArray(Movie* array[]) {
    int subscript = 0;
    bstreeToArrayHelper(root, array, subscript);
    makeEmpty(); // clear tree after placing into array
}

/**
 * Helper function to put binTree into array
 * @param node to place into array
 * @param array to place binTrees into
 * @param subscript location of where to place node in array
 */
void BinTree::bstreeToArrayHelper(Node* node, Movie* array[], int& subscript) {
    if (node != NULL) {
        bstreeToArrayHelper(node->left, array, subscript);
        array[subscript] = node->movie;
        subscript++;
        bstreeToArrayHelper(node->right, array, subscript);
    }
}

/**
 * Creates binTree from sorted array. Root (recursively) at (low+high)/2. Low is lowest subscript of the array range
 * and high is the highest.
 * @param array to use to create binTree out of
 */
void BinTree::arrayToBSTree(Movie* array[]) {
    int i = 0;
    // Find where the values of the array end
    while (array[i] != NULL) {
        i++;
    }
    // make sure current tree is cleared
    makeEmpty();
    arrayToBSTree(array, root, 0, i - 1);
    i = 0;
    // After creating binTree, clear out the array
    while (array[i] != NULL) {
        array[i] = NULL;
        i++;
    }
}

/**
 * Helper function to create binTree from sorted array
 * @param array to create binTree from
 * @param node to make
 * @param low is the low subscript
 * @param high is the high subscript
 */
void BinTree::arrayToBSTree(Movie* array[], Node*& node, int low, int high) {
    // Recursively called until low is larger than high
    if (low <= high) {
        // find mid point to make root node from
        int mid = (high + low) / 2;
        node = makeNewNode(array[mid]);
        arrayToBSTree(array, node->left, low, mid - 1);
        arrayToBSTree(array, node->right, mid + 1, high);
    }
}

/**
 * Inserts node with given data
 * @param data to insert
 * @return true if inserted (not a duplicate value)
 */
bool BinTree::insert(Movie* movie) {
    if (root == NULL) {
        root = makeNewNode(movie);
        return true;
    }
    return insertHelper(root, movie);
}

/**
 * Helper for insert function
 * @param node that is currently being traversed
 * @param data to insert
 * @return true if inserted (not a duplicate value)
 */
bool BinTree::insertHelper(Node* node, Movie* movie) {
//    // Discard duplicates. Dereferenced to compare data instead of memory locations.
//    if (*movie == *node->movie) {
//        return false;
//    }
//    // Check if data goes left
//    if (*movie < *node->movie) {
//        // if there is nothing to the left, this is where node is made
//        if (node->left == NULL) {
//            node->left = makeNewNode(movie);
//        } else {
//            // otherwise keep traversing left
//            insertHelper(node->left, movie);
//        }
//        // Check if data goes right
//    } else if (*movie > *node->movie) {
//        // if there is nothing to the right, this is where node is made
//        if (node->right == NULL) {
//            node->right = makeNewNode(movie);
//        } else {
//            // otherwise keep traversing right
//            insertHelper(node->right, movie);
//        }
//    }
    return true;
}

/**
 * Retrieves node with given data, if it's in tree
 * @param data to find in tree
 * @param found is returned by reference, is garbage if not found
 * @return true if data is in tree
 */
bool BinTree::retrieve(const Movie& movie, Movie*& found) const {
    if (!isEmpty()) {
        found = NULL; // make sure found isn't carrying data without finding in tree.
        return retrieveHelper(root, movie, found);
    }
}

/**
 * Helper function to retrieve
 * @param node currently being traversed
 * @param data to find in tree
 * @param found is returned by reference, is garbage if not found
 * @return true if data is in tree
 */
bool BinTree::retrieveHelper(Node* node, const Movie& movie, Movie*& found) const {
//    // if node is null, value is not found
//    if (node == NULL) {
//        return false;
//    }
//    // pass value back by reference if found
//    if (*node->movie == movie) {
//        found = node->movie;
//        return true;
//        // traverse right if larger
//     } else if (*node->movie < movie) {
//        return retrieveHelper(node->right, movie, found);
//        // traverse left if smaller
//    } else if (*node->movie > movie) {
//        return retrieveHelper(node->left, movie, found);
//    }
    return false;
}

//------------------------- displaySideways ---------------------------------
// Displays a binary tree as though you are viewing it from the side;
// hard coded displaying to standard output.
// Preconditions: NONE
// Postconditions: BinTree remains unchanged.
void BinTree::displaySideways() const {
    sideways(root, 0);
}

//---------------------------- Sideways -------------------------------------
// Helper method for displaySideways
// Preconditions: NONE
// Postconditions: BinTree remains unchanged.
void BinTree::sideways(Node* current, int level) const {
    if (current != NULL) {
        level++;
        sideways(current->right, level);

        // indent for readability, 4 spaces per depth level
        for (int i = level; i >= 0; i--) {
            cout << "    ";
        }
        // TODO: Implement printing Movie
       // cout << *current->movie << endl;        // display information of object
        sideways(current->left, level);
    }
}

/**
 * Creates node with null left and right pointers
 * @param data to put into node
 * @return node
 */
BinTree::Node* BinTree::makeNewNode(Movie* movie) {
    Node* node = new Node();
    node->movie = movie;
    node->left = NULL;
    node->right = NULL;

    return node;
}

/**
 * Destructor
 */
BinTree::~BinTree() {
    makeEmpty();
}

/**
 * Empties out binTree
 */
void BinTree::makeEmpty() {
    makeEmptyHelper(root);
    root = NULL;
}

/**
 *  Helper for makeEmpty
 * @param node that is currently on
 */
void BinTree::makeEmptyHelper(BinTree::Node*& node) {
    if (node != NULL) {
        // Recursively goes left and right to clear out entire tree
        makeEmptyHelper(node->left);
        makeEmptyHelper(node->right);

        delete node;
        node = NULL;
    }
}







