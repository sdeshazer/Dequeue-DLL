#include "stdafx.h"
#include <iostream>
#include <string>

#include "Dequeue.h"
#include "DoublyLinkedList.h"
#include "Node.h"

using namespace std;


//Dequeue::Dequeue(void){

	//ConstructorBanner();
	//dequeueElements.InitializeList();

//}

Dequeue::~Dequeue(void){

	//DestructorBanner();
	dequeueElements.InitializeList();

}

void Dequeue::DestroyDequeue(){

	back = nullptr; 
	while (front != nullptr) {
		Node* temp = front; 
		front = front->next;
		delete temp;
	
	}//while

	size = 0; 

}//Destroy

//Node* DoublyLinkedList::GetFirst(){

	//return nullptr;

//}//GetFirst

//Node* DoublyLinkedList::GetLast(){

	//return nullptr;

//}//GetLast

void Dequeue::InitializeDequeue() {

	dequeueElements.InitializeList();

}//Initialize

bool Dequeue::IsEmpty(){

	return (front == nullptr);
	
}//IsEmpty

void Dequeue::Print() {

	dequeueElements.Print();

}//print

void Dequeue::EnqueueFront(int datum){

	Node* newNode = Node::getnode(datum); 

	if (newNode = nullptr) {
		cout << endl;
		cout << "**new item is empty and cannot be added!**" << endl;
		cout << endl;
	}//if
	else {
		if (front = nullptr) {
			back = front = newNode; 
		}//if
		else {
			newNode->next = front; 
			front->prev = newNode;
			front = newNode;
		
		}//else
		
		size++; 
			
	}//else
}//EnqueueFront

void Dequeue::EnqueueBack(int datum) {

	Node* newNode = Node::getnode(datum);

	if (newNode = nullptr) {
		cout << endl;
		cout << "**new item is empty and cannot be added!**" << endl;
		cout << endl;
	}//if
	else {
		if (back = nullptr) {
			front = back = newNode;
		}//if
		else {// basically oposite of front: 
			newNode->prev = back;
			back->next= newNode;
			back = newNode;

		}//else

		size++;

	}//else
	
}//EnqueueBack

void Dequeue::DequeueFront() {

	if (IsEmpty() == true) {
		cout << "**Error, Empty Queue**";
	}//if
	else {
		Node* temp = front;
		front = front->next;

		if (front == nullptr) {
			back = nullptr;
		}//if
		else
			front->prev = nullptr;
		delete temp;//problem?

		size--;

	}//else


}//DequeueFront

void Dequeue::DequeueBack(){
	if (IsEmpty() == true) {
	
		cout << "**Error, Already An Empty Queue**";

	}//if
	else {
		Node* temp = back;
		back = back->prev;

		if (back == nullptr) {

			front = nullptr;

		}//if back if null, set front to null.
		else
			back->next = nullptr; 
		delete temp; //problem?

		size--;
	
	}//else
}//DequeueBack
int Dequeue::peekFront(){

	if (IsEmpty() == true) {
		cout << "**Empty!**" << endl; 
		return -1; //problem?

	}//if
	else
		return front->value; 

}//peekFront

int Dequeue::peekBack() {

	if (IsEmpty() == true) {
		cout << "**Empty!**" << endl;
		return -1; //problem?

	}//if
	else
		return back->value;

}//peekBack


//void Dequeue::InitializeDequeue(int &){

//}




