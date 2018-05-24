
#pragma once

class Node {
	friend class Dequeue;
	friend class DoublyLinkedList;

	static Node* getnode(int value){

		Node* newNode = (Node*)malloc(sizeof(Node));
		newNode->value = value;
		newNode->prev = newNode->next = nullptr;
		return newNode;
	}//getnode
public:
	Node();
	Node(int, Node*, Node*);

	~Node();
private:
	int     value;
	Node*   next;
	Node*   prev;

	void ConstructorBanner();
	void DestructorBanner();
}; // class Node
