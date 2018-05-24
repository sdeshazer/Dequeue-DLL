
#include "stdafx.h"
#include <iostream>

using namespace std;

Node::Node() {
	ConstructorBanner();

	value = 0;
	next = NULL;
	prev = NULL;
} // constructor

Node::Node(int listElement, 
			Node *prevPtr, 
			Node *nextPtr) {
	ConstructorBanner();

	value = listElement;
	prev = prevPtr;
	next = nextPtr;
} // constructor

Node::~Node() {
	DestructorBanner();
} // destructor

void Node::ConstructorBanner() {
	cout << "=========================" << endl;
	cout << "Constructor Node invoked." << endl;
	cout << "=========================" << endl;
	cout << endl;
} 

void Node::DestructorBanner() {
	cout << "========================" << endl;
	cout << "Destructor Node invoked." << endl;
	cout << "========================" << endl;
	cout << endl;
} 
