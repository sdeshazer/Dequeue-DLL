#pragma once

#include "stdafx.h"
#include "DoublyLinkedList.h"
#include "Node.h"
class Dequeue{

	friend class Node; 
	friend class DoublyLinkedList;

	Node* front; 
	Node* back; 
	int size;


public:
	Dequeue(void) {
		front = back = nullptr;
		size = 0;
	};//problem?
	~Dequeue(void);


	void DestroyDequeue();
	//Node* GetFirst();
	//Node* GetLast(); 
	void InitializeDequeue();
	void EnqueueBack(int);
	void EnqueueFront(int); 
	//void InitializeDequeue(int&);
	void DequeueBack();
	void DequeueFront();
	bool IsEmpty();
	void Print();
	int peekFront(); 
	int peekBack();


private:

	DoublyLinkedList dequeueElements;

	//void ConstructorBanner();
	//void DestructorBanner();


};



 

