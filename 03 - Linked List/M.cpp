#include <iostream>
#include <vector>

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
	
	void pop_front(){
		Node* temp = head;
		head = head->next;
		delete temp;
	}
	
};

int main() {
	LinkedList list;
	
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	list.push_back(5);
	list.push_back(6);
	list.push_back(7);
	list.push_back(8);
	list.push_back(9);
	list.push_back(10);
	
	list.pop_front();
	list.pop_front();
	list.pop_front();
	
	list.print();
	
	cout << "Working" << endl;
	return 0;
}
