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

/*
// .h
Array arr(); // function prototype

// .cpp
Array arr(){
	return Array();
}
*/

int main (){
	// Array arr;
	// Array arr(); // function defination not object creation
	Array arr{};    // cpp11+ versions
	
	// int var1;
	// int var2 = 10;
	// int var3(30); 
	// int var4{20}; // cpp11+ versions
	
	int size = arr.size();
	cout << size << endl;

	for (int i = 0; i < size; i++){
		cout << arr.at(i) << " ";
	}
	cout << endl;
	
	return 0;
}
