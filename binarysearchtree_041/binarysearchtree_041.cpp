#include <iostream>
#include <string>

class node {
public:
	String info;
	node* leftchild;
	node* rightchild;

	// construktor for the node class
	node(String i, node* I, node* r)
	{
		info = i;
		leftchild = I;
		rightchild = r;
	}
};