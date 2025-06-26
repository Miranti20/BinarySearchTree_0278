#include <iostream>
#include <string>
using namespace std;


class Node
{
public:
    int info;
    Node* leftchild;
    Node* rightchild;

    // construktor for the node class
    Node()
    {
        leftchild = nullptr; // intialieze left hild to null
        rightchild = nullptr; // intialieze right child to null
    }
};




