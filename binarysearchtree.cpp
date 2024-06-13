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

            if (parent == nullptr) //if thr parent is NULL (Tree is empty)
            {
                ROOT = newNode; // mark the noew node as Root
                return; // Exit
            }

            if (element < parent->info) //if the value in the data field of the new node is less than that of the
            {
                parent->leftchild = newNode; // Make the left child of the parent point to the new node
            }
            else if (element > parent->info) //if the value in the datafieldof the new node is greater than that
            {
                parent->rightchild = newNode; // make the right child of the parent point to the new node
            }
        }
        
        void search(string element, Node*& parent, Node*& currentNode)
        {
            // This function searches the currentNode of the specifien Node as well as the current Node of its parents
            currentNode = ROOT;
            parent = NULL;
            while ((currentNode != NULL) && (currentNode->info != element))
            {
                parent = currentNode;
                if (element < currentNode->info)
                    currentNode = currentNode->leftchild;
                else 
                    currentNode = currentNode->rightchild;
            }
        }

        void inorder(Node* ptr)
        {
            if (ROOT = NULL)
        }
}