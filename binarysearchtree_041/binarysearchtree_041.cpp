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

		node* parent = NULL;
		node* currentnode = NULL;
		search(element, parent, currentnode); //locate the node which will be the parent of the node to be inserted

		if (parent == NULL) {		// if the parent is null (tree is empty)
			ROOT = newnode; //mark the new node as ROOT
			return; // EXIT
		}

		if (element < parent->info) {		// if the value in the data field of the new node is less than that of the parent
			parent->leftchild = newnode; // make the left child of the parent point to the new node
		}
		else if (element > parent->info) {	//if the value in the data field of the new node is greater than that of the parent
			parent->rightchild = newnode; // make the left child of the parent point to the new node
		}
	}


	void search(string element, node*& parent, node*& currentnode) {  // this function searches the currentnode of the specified node as well as the current node of its parent
		currentnode = ROOT;
		parent = NULL;
		while ((currentnode != NULL) && (currentnode->info != element)) {
			parent = currentnode;
			if (element < currentnode->info)
				currentnode = currentnode->leftchild;
			else
				currentnode = currentnode->rightchild;
		}
	}

	void inorder(node* ptr) {
		if (ROOT == NULL) {
			cout << "Tree is empty" << endl;
			return;
		}
		if (ptr != NULL) {
			inorder(ptr->leftchild);
			cout << ptr->info << " ";
			inorder(ptr->rightchild);
		}
	}

	void preorder(node* ptr) {
		if (ROOT == NULL) {
			cout << "Tree is empty" << endl;
			return;
		}
		if (ptr != NULL) {
			cout << ptr->info << " ";
			preorder(ptr->leftchild);
			preorder(ptr->rightchild);
		}
	}

	void postorder(node* ptr) { // performs the postorder traversal of the tree
		if (ROOT == NULL) {
			cout << "Tree is empty" << endl;
			return;
		}
		if (ptr != NULL) {
			postorder(ptr->leftchild);
			postorder(ptr->rightchild);
			cout << ptr->info << " ";
		}
	}
};

int main() {
	BinaryTree obj;
	while (true) {
		cout << "\nmenu" << endl;
		cout << "1. implement insert operation" << endl;
		cout << "2. perform inorder travesal" << endl;
		cout << "3. perform preorder travesal" << endl;
		cout << "4. perform postorder travesal" << endl;
		cout << "5. Exit" << endl;
		cout << "\nEnter your choice (1-5) : ";

		char ch;
		cin >> ch;
		cout << endl;

		switch (ch) {
		case '1': {
			cout << "enter a word";
			string word;
			cin >> word;
			obj.insert(word);
			break;
		}
		case '2': {
			obj.inorder(obj.ROOT);
			break;
		}
		case '3': {
			obj.preorder(obj.ROOT);
			break;
		}
		case'4': {
			obj.preorder(obj.ROOT);
			break;
		}
		case'5': {
			return 0;
		default:
			cout << "\nInvalid option" << endl;
			break;
		}
		}
	}
}
