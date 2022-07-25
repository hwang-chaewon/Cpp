#include <iostream>

int main() {
	using namespace std;

	unsigned int n = 5u;//'명확하게'표시하는 방식
	long n2 = 5L;

	/*8진수, 16진수*/
	//Decimal(10진수): 0,1,2,3,4,5,6,7,8,9,10,11,...
	//Octal(8진수): 0,1,2,3,4,5,6,7, 10,11,12,...
	//Hexa Decimal(16진수): 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F, 10,...
	int x = 012;//앞에 0을 붙이면 8진수라는 의미
	cout << x << endl;//cout은 기본적으로 10진수로 출력
	int y = 0x12;//16진수는 앞에 0x를 붙임
	cout << y << endl;

	/*C++14부터 binary literal이 가능해짐*/
	//이진수로 바로 입력이 가능해진 것. 앞에 0b를 붙이면 됨
	int z = 0b1010;
	cout << z << endl;
	//긴 이진수를 입력할 때 알아보기가 힘듦. C++14부터 '를 중간중간 삽입해도 컴파일러가 이를 무시함
	//10진수에도 쓸 수 있음! 전체적으로 '를 //처럼 사용할 수 있게 됨
	int z2 = 0b1011'1111'1010;
	int z3 = 0b101111111010;
	cout << z2 << endl;
	cout << z3 << endl;

	return 0;
}
