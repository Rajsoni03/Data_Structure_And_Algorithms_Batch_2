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
	}
	
	int at(int index){
		Node* curr = this->head;
		
		while(index-- && curr){ 
			curr = curr->next;
		}
		
		if (!curr) return -1;
		
		return curr->data;
	}
};

int main() {
	LinkedList list;
	
	list.push_front(10);
	list.push_front(20);
	list.push_front(30);
	list.push_front(40);
	list.push_front(50);
	
	cout << list.at(2) << endl;
	
	cout << "Working" << endl;
	return 0;
}
