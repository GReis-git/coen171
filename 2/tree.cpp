#include <cstdlib>
#include "tree.h"
#include <iostream>

using namespace std;
using namespace coen171HW2;

namespace coen171HW2 {

	Node::Node(int a) {
		value = a;
		left = NULL;
		right = NULL;
	}

	Tree::Tree() {
		root = NULL;
	}

	bool Node::member(int anObject) {
		if (anObject < value) 
			if (left == NULL)
				return false;
			else
				return left->member(anObject);
		if (anObject > value)
			if (right == NULL)
				return false;
			else
				return right->member(anObject);
		return true;
	}
	void Node::insert(int anObject) {
	
		if (anObject < value)
			if (left == NULL)
				left = new Node(anObject);
			else 
				left->insert(anObject);
		else
			if (right == NULL) 
				right = new Node(anObject);
			else
				right->insert(anObject);

	}

	bool Tree::member(int anObject) {
		if(root == NULL)
			return false;
		else
			return root->member(anObject);
	}

	void Tree::insert(int anObject) {
		if(root == NULL) 
			root = new Node(anObject);
		else
			root->insert(anObject);
	}
}
// begin test.st
int main() {

	Tree* t = new Tree();

	t->insert(15);
	t->insert(10);
	t->insert(20);
	t->insert(5);
	t->insert(30);
	t->insert(25);

	std::cout << t->member(15) << std::endl;
	std::cout << t->member(5) << std::endl;
	std::cout << t->member(25) << std::endl;
	std::cout << t->member(7) << std::endl;
	std::cout << t->member(11) << std::endl;
	std::cout << t->member(44) << std::endl;

}
