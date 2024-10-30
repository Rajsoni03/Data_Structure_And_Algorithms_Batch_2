#include <iostream>
using namespace std;

class LinkedList {
private:
	class Node { // data type (user defined data type)
	public:
		int data;
		Node *next;
		
		Node(int data, Node *next=nullptr) {
			this->data = data;
			this->next = next; // nullptr 
		}
	};
	Node* head;

public:
	LinkedList(){
		this->head = nullptr;
	}
	
	void push_front(int value){
		// Node * n = new Node(value);
		// n->next = this->head;
		// head = n;
		
		this->head = new Node(value, this->head); 
	}
	
	void print(){
		Node* curr = this->head; 

		while(curr != nullptr){
			cout << curr->data << endl;
			curr = curr->next;
		}
	}
	
	
};

int main() {
	LinkedList list;
	
	list.push_front(10);
	list.push_front(20);
	list.push_front(30);
	list.push_front(40);
	list.push_front(50);
	
	list.print();
	
	cout << "Working" << endl;
	
	// Homework
	return 0;
}
