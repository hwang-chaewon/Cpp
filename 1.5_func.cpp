#include <iostream>

using namespace std; 

int addTwoNumbers(int n_1, int n_2) {
	int sum = n_1 + n_2;
	return sum;
}

void printHello() {
	cout << "Hello";
}

void printHelloWorld() {
	printHello();//함수도 함수를 부를 수 있다
	cout << "world!" << endl;

	cout << "this should be printed!" << endl;

	//void에서 return문은 선택사항. 다만 return은 컴파일러에게 나 다 입력했어~이걸 말하는 것이므로 뒤에 문장은 실행 안 될 것
	return;

	cout << "this should be not printed.." << endl;
}

int main() {

	cout << addTwoNumbers(1,2) << endl;
	printHelloWorld();

	return 0;
}