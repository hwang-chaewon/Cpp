#include <iostream>

using namespace std;

//지역 영역은 함수의 중괄호에도 그대로 적용이 된다
void doSomething(int x) {
	x = 123;
	cout << x << endl; //123이 나올 것
}

int main() {
	int x = 0;
	cout << x << endl; //0이 나올 것
	doSomething(x); //함수 호출로 123이 출력될 것
	cout << x << endl; //0이 나올 것
	return 0;
}