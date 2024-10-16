#include <iostream>
using namespace std;

int main(){
	
	int a = 1; // 00000000 00000000 00000000 0000001
	char b = 'W'; 
	double c = 3.14;
	
	void * ptr = &b; 
	
	cout << *(char*)ptr << endl;
	
	
	return 0;
}