#include <iostream>

using namespace std;

int val = 3;

int main() {
	cout << val << endl;
	int val = 1;
	//가까운 {}에서 선언한 지역 변수가 출력됨
	cout << val << endl;
	//전역 변수를 출력하고 싶은 경우: 전역 변수 연산자 :: 쓰기
	cout << ::val << endl;
	return 0;
}