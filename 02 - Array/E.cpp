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
	
	Array(int arr_size, int default_val){
		this->_size = arr_size;
		this->_arr = new int[arr_size];
		
		for (int i = 0; i < arr_size; i++){
			this->_arr[i] = default_val;
		}
		
		cout << "Constructor with size and default_val parameter" << endl;
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
	
	Array(const Array& obj){
		this->_size = obj._size;
		this->_arr = new int[this->_size];
		
		for (int i = 0; i < this->_size; i++){
			this->_arr[i] = obj._arr[i];
		}
		cout << "Copy Constructor" << endl;
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
	Array arr = {10, 20, 30, 40};
	Array arr2(arr);
	
	int size = arr.size();
	cout << size << endl;

	for (int i = 0; i < size; i++){
		cout << arr.at(i) << " ";
	}
	cout << endl;
	
	return 0;
}
