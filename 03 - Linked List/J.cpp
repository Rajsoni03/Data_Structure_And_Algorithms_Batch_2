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
	int _size = 0;
	Node* head;
	Node* tail;

public:
	LinkedList(){
		this->head = nullptr;
		this->tail = nullptr;
	}
	
	void push_front(int value){
		// Time Complexity = O(1)
		
		if (head==nullptr){
			this->head = this->tail = new Node(value);
		}
		else {
			this->head = new Node(value, this->head);
		}
		
		this->_size++;
	}
	
	void push_back(int value){
		// Time Complexity = O(1)
		
		if (head==nullptr){
			this->head = this->tail = new Node(value); 
		}
		else{
			this->tail->next = new Node(value);
			// move tail to next element 
			this->tail = this->tail->next;
		}
		
		this->_size++;
	}
	
	void print(){
		Node* curr = this->head; 
		
		while(curr != nullptr){
			cout << curr->data << endl;
			curr = curr->next;
		}
	}
	
	int length(){
		// Time Complexity = O(1)
		return this->_size;
	}
	
};

int main() {
	LinkedList list;
	
	list.push_back(1000);
	list.push_front(10);
	list.push_front(20);
	list.push_front(30);
	list.push_front(40);
	list.push_front(50);
	list.push_back(100);
	list.push_back(200);
	list.push_back(300);
	list.push_front(5);
	
	list.print();
	
	cout << "Size is : " << list.length() << endl;
	return 0;
}
