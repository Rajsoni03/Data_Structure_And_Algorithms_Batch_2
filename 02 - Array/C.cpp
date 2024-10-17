#include <iostream>
using namespace std;


class ArrayADT{  					 // abstract class
public:
	virtual int size() = 0; 		 // abstract method 
	virtual int& at(int index) = 0;  // abstract method
	virtual void insert(int index, int value) = 0; // abstract method
};

class Array : public ArrayADT{
	int _size;
	int* _arr;
	
public:
	Array(){
		this->_size = 0;
		this->_arr = nullptr;
		cout << "Default Constructor" << endl;
	}
	
	Array(int arr_size){
		this->_size = arr_size;
		this->_arr = new int[arr_size];
		cout << "Constructor with size parameter" << endl;
	}
	
	Array(initializer_list<int> list){
		this->_size = list.size();
		this->_arr = new int[this->_size];
		
		int index = 0;
		
		for (int ele : list){
			this->_arr[index] = ele;
			index++;
		}
		
		cout << "initializer_list Constructor" << endl;
	}
	
	int size(){
		return this->_size;
	}
	
	int& at(int index){
		return this->_arr[index];
	}
	
	void insert(int index, int value){
		this->_arr[index] = value;
	}
};


int main (){
	Array arr = {1, 2, 3, 4, 5}; // similer to int arr[] = {1, 2, 3, 4, 5};
	// Array arr{1, 2, 3, 4, 5};
	// Array arr{1};
	
	int size = arr.size();
	cout << size << endl;

	for (int i = 0; i < size; i++){
		cout << arr.at(i) << " ";
	}
	cout << endl;
	
	return 0;
}
