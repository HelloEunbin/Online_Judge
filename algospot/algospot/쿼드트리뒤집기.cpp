#include<iostream>
#include<string>

using namespace std;

typedef struct Tree {
	char color[5];
	Tree *child;
}Tree;

typedef struct root {
	char color[5];
}root;

Tree *tree;
Tree *p;

Tree* create_Tree(Tree *tree) {

	char c;
	
	p = (Tree*)malloc(sizeof(Tree));
	p->child = NULL;

	for (int i = 0; i < 4; i++) {
		cin >> c;
		tree->color[i] = c;
		if (c == 'x') {
			tree->child = create_Tree(p);
		}
	}
	return p;
}
int main() {

	int C;
	cin >> C;

	string str;


	tree = (Tree*)malloc(sizeof(tree));
	tree->child = NULL;
	
	char c;
	
	while (C--) {
		cin >> c;
		create_Tree(tree);
	}

	return 0;
}