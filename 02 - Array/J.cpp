#include <iostream>
using namespace std;

template <typename T>
class ArrayADT{  					 // abstract class
public:
	virtual int size() = 0; 		 // abstract method 
	virtual T& at(int index) = 0;    // abstract method
	virtual void insert(int index, T value) = 0; // abstract method
};

template <typename T>
class Array : public ArrayADT<T>{
	int _size;
	T* _arr;
	
public:
	Array(){
		this->_size = 0;
		this->_arr = nullptr;
		cout << "Default Constructor" << endl;
	}
	
	Array(int arr_size){
		this->_size = arr_size;
		this->_arr = new T[arr_size];
		cout << "Constructor with size parameter" << endl;
	}
	
	Array(int arr_size, T default_val){
		this->_size = arr_size;
		this->_arr = new T[arr_size];
		
		for (int i = 0; i < arr_size; i++){
			this->_arr[i] = default_val;
		}
		
		cout << "Constructor with size and default_val parameter" << endl;
	}
	
	Array(initializer_list<T> list){
		this->_size = list.size();
		this->_arr = new T[this->_size];
		
		int index = 0;
		
		for (T ele : list){
			this->_arr[index] = ele;
			index++;
		}
		
		cout << "initializer_list Constructor" << endl;
	}
	
	Array(const Array& obj){
		this->_size = obj._size;
		this->_arr = new T[this->_size];
		
		for (int i = 0; i < this->_size; i++){
			this->_arr[i] = obj._arr[i];
		}
		cout << "Copy Constructor" << endl;
	}
	
	Array& operator=(const Array& obj){
		this->_size = obj._size;
		delete[] this->_arr;
		this->_arr = new T[this->_size];
		
		for (int i = 0; i < this->_size; i++){
			this->_arr[i] = obj._arr[i];
		}
		cout << "Copy Assignment" << endl;
		return *this;
	}
	
	int size(){
		return this->_size;
	}
	
	T& at(int index){
		return this->_arr[index];
	}
	
	T& operator[](int index){
		return this->_arr[index];
	}
	
	bool empty(){
		return this->_size == 0;
	}
	
	void insert(int index, T value){
		this->_arr[index] = value;
	}
	
	Array operator+(Array& obj2){
		Array<T> new_arr(this->_size + obj2._size);
		
		for (int i = 0; i < this->_size; i++){
			new_arr._arr[i] = this->_arr[i];
		}
		
		for (int i = 0; i < obj2._size; i++){
			new_arr._arr[this->_size + i] = obj2.at(i);
		}	
		return new_arr;
	}
};

int main (){
	Array<Array<int>> arr1 = {{1, 2, 10, 20}, {3, 4}, {5, 6}, {7, 8}};
	
	int size = arr1.size();
	cout << size << endl;

	for (int i = 0; i < size; i++){
		for (int j = 0; j < arr1[i].size(); j++){
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
