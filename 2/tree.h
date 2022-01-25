#ifndef COEN171_TREE_H
#define COEN171_TREE_H

#include <cstdlib>

using namespace std;

namespace coen171HW2 {

	class Node {
	
	int value;
	Node* left;
	Node* right;

	public:

		Node(int);
		void insert(int);
		bool member(int);

	};

	class Tree {
	
	Node* root;
	
	public: 
		Tree();
		void insert(int);
		bool member(int);
	};
}

#endif
