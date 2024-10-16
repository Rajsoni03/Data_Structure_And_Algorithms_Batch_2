#include <iostream>
using namespace std;


class Student{
	public:
		int age;
		int roll_number;
		
		Student(int age = 0, int roll_number = 0){
			// Student *this;
			cout << "Printing from Constructor : " << this << endl;
			
			this->age = age;
			this->roll_number = roll_number;
		}
};


int main(){
	Student s(10, 64736); // constructor call
	cout << "Printing from Main : " << &s << endl;
	
	Student* ptr = &s;
	
	cout << s.age << endl;
	cout << (*ptr).age << endl;
	cout << ptr->age << endl; // -> dereference and access member
}
