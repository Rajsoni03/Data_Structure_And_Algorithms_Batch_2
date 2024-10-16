#include <iostream>
using namespace std;

int main(){
	char arr[] = {'a', 'd', 'e', 'f'};
	char * ptr = arr; 
	
	cout << *(ptr+2) << endl;
	cout << ptr[2] << endl; // 

	cout << *(arr+2) << endl; 
	cout << arr[2] << endl;
	
	// cout << arr++ << endl; // Error : operator ++ not overloaded
	
	return 0;
}