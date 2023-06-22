#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int id;
	string name;
	static int count;
public:
	Student() {
		cout << this << " default constructor!\n";
		count++;
	}

	static int getCount() {		//inline
		return count;
	}

	~Student() {
		cout << this << " destructor activated... RIP!\n";
		count--;
	}
};

Student* test() {
	Student s3;
	Student* s4 = new Student();		// dynamic memory allocation
	cout << Student::getCount() << '\n';
	return s4;
}

int Student::count = 0;		// initialize

int main() {
	Student s1;
	Student s2;
	cout << s1.getCount() << '\n';
	cout << Student::getCount() << '\n';
	Student* s4 = test();
	delete s4;
	s4 = nullptr;
	cout << Student::getCount() << '\n';		// 3, ???
	return 0;
}