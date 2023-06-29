#include <iostream>
#include <string>
using namespace std;

class node {
public:
	string info;
	node* leftchild;
	node* rightchild;

	// Constructor for the node class 
	 node(string i, node* I, node* r)
	{
		info = i;
		leftchild = I;
		rightchild = r;
	}
};

class BinaryTree {
public:
	node* ROOT;

	BinaryTree() {
		ROOT = NULL; // initializing ROOT to null
	}


};