#include <iostream>
using namespace std;

class LinkedList {
private:
	class Node { // data type (user defined data type)
	public:
		int data;
		Node *next;
		
		Node(int data) {
			this->data = data;
			this->next = nullptr;
		}
	};
	Node* head;

public:
	LinkedList(){
		this->head = nullptr;
	}
	
	void push_front(int value){
		Node * n = new Node(value);
		n->next = this->head;
		head = n;
	}
	
	void print(){
		Node* curr = this->head; 

		while(curr != nullptr){
			cout << curr->data << endl;
			curr = curr->next;
		}
		
		//      N1    N2    N3    
		// H -> 30 -> 20 -> 10 -> nullptr
		//                          c^
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
	
	// cout << list.at(10) << endl; // homework | -1
	
	return 0;
}
