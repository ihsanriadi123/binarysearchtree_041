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

	void insert(string element) {	// insert a node in the binary search tree
		node* newnode = new node(element, NULL, NULL); // Allocate memory for the new node
		newnode->info = element; //Assign value to the data field of the new node
		newnode->leftchild = NULL; // make the left child of the new node point to null
		newnode->rightchild = NULL; // make the left child of the new node point to null



	} 

};