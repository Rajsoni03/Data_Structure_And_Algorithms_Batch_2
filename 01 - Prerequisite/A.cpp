#include <iostream>
using namespace std;

int main (){
	int A = 10;
	// int* ptr = &A;
	long long ptr = (long long) &A;
	
	cout << &A << endl;
	cout << ptr << endl;
	cout << *((int*)ptr) << endl;
	
	return 0;
}

// # intgers
// short - 2 byte 
// int   - 4 byte
// long  - 4/8 byte (compiler)
// long long - 8 byte

// # floating 
// float - 4 byte
// double - 8 byte