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
};

int main(){
	
	return 0;
}