#include<iostream>

using namespace std;

int main() {
	int x = 2;
	/*(유일한)삼항 연산자
	조건식이 참이면 :(콜론)기준으로 왼쪽 실행
	조건식이 거짓이면 :(콜론)기준으로 오른쪽 실행*/
	int y = (x > 0) ? 1 : 2;
	return 0;
}