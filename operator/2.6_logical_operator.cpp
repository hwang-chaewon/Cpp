#include <iostream>

int main() {
	using namespace std;

	// !(not) operator
	//!와 변수 사이에 띄어쓰기하면 안됨
	cout << !true << endl;

	//&&(and) operator
	cout << (true&&true) << endl;

	//||(or) operator
	cout << (true||false) << endl;

	return 0;
}