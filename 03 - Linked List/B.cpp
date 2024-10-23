#include <iostream>

class LinkedList{
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
};

int main(){
	LinkedList list;
	
	// H -> 30 -> 20 -> 10 -> nullptr
	list.push_front(10);
	list.push_front(20);
	list.push_front(30);
	
	return 0;
}