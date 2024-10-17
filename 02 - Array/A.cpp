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
	Array(int arr_size){
		this->_size = arr_size;
		this->_arr = new int[arr_size];
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
	// ArrayADT arr_adt; // Error
	Array arr(10);
	
	int size = arr.size();
	cout << size << endl;

	for (int i = 0; i < size; i++){
		cout << arr.at(i) << " ";
	}
	cout << endl;
	
	return 0;
}
