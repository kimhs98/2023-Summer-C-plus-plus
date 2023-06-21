#include <iostream>
using namespace std;

int main() {
	int a = 9;
	int b = 3;
	const int* const pa = &a;

	//*pa = 10;
	//pa = &b;
	a = 10;

	cout << *pa << '\n';

	// LLP64 or 4/4/8 (int and long are 32-bit, pointer is 64-bit)
	//32 bit systems :

	//LP32 or 2 / 4 / 4 (int is 16 - bit, long and pointer are 32 - bit)
	//	Win16 API
	//	ILP32 or 4 / 4 / 4 (int, long, and pointer are 32 - bit);
	//Win32 API
	//	Unix and Unix - like systems(Linux, macOS)
	//	64 bit systems :

	//LLP64 or 4 / 4 / 8 (int and long are 32 - bit, pointer is 64 - bit)
	//	Win32 API(also called the Windows API) with compilation target 64 - bit ARM(AArch64) or x86 - 64 (a.k.a.x64)
	//	LP64 or 4 / 8 / 8 (int is 32 - bit, long and pointer are 64 - bit)
	//	Unix and Unix - like systems(Linux, macOS)
	//https ://en.cppreference.com/w/cpp/language/types

	cout << sizeof(long int) << '\n';
	cout << sizeof(int*) << '\n';

	return 0;
}