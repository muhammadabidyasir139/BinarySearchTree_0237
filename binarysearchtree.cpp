#include <iostream>
#include <string>
using namespace std;

class Node 
{
    public:
        string info;
        Node* leftchild;
        Node* rightchild;

        //constructor fir the node class 
        Node(string i, Node* l, Node* r)
        {
            info = i;
            leftchild = l;
            rightchild = r;
        }
};

class BinaryTree 
{
    public:
        Node* ROOT;

        BinaryTree()
        {
            ROOT = nullptr; //initializing ROOT to null 
        }
        void insert(string element) //insert a node in the binary seacrh tree
        {
            Node* newNode = new Node(element, nullptr, nullptr); //allocate memiry for the new node
            newNode->info = element; // Assign value to the data field of the new node
            newNode->leftchild = nullptr; // Make the left child of the new Node point to NULL
            newNode->rightchild = nullptr; // Make the right child of the new Node point to NULL

            Node* parent = nullptr;
            Node* currentNode = nullptr;
            search(element, parent, currentNode); // Locate the node which will be the parent of the node to be insert
        }
}