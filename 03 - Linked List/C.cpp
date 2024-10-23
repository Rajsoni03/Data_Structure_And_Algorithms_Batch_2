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
		// H -> 30 -> 20 -> 10 -> nullptr
		//            ^
		
		cout << head->data << endl;
		cout << head->next->data << endl;
		cout << head->next->next->data << endl;
		// cout << head->next->next->next->data << endl; // not valid
		// cout << nullptr->data << endl;
	}
};

int main(){
	LinkedList list;
	
	list.push_front(10);
	list.push_front(20);
	list.push_front(30);
	
	list.print();
	
	return 0;
}
