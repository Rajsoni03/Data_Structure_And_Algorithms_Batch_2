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
		head = new Node(value, this->head); 
	}
	
	void push_back(int value){
		// Time Complexity = O(n)
		
		if (head==nullptr){
			head = new Node(value);
		}
		else{
			// find the last element
			Node * curr = head;
			while(curr->next != nullptr){
				curr = curr->next;
			}
			
			// create new node
			// point last->next to new node
			curr->next = new Node(value);
		}
		
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
	
	cout << "Working" << endl;
	
	// Homework
	return 0;
}
