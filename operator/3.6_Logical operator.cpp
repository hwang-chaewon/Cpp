#include <iostream>

using namespace std;

int main() {
	//Logical AND
	//연산자의 우선순위 때문에 논리적 오류가 없는데 오류가 생길 때마다 ()를 쳐주자
	cout << (true && false) << endl;

	//Logical OR
	cout << (true || false) << endl;

	//실수하기 좋은 사례: 연산자의 우선순위 관련
	int x = 5;
	int y = 7;
	//!(x==y)가 아니라, ((!x)==y) 가 된다.
	if (!x == y)
		cout << "x does not equal y" << endl;
	else 
		cout << "eq" << endl;

	//short circuit evaluation
	x = 2;
	y = 2;
	//AND는 왼쪽부터 계산하면서, 왼쪽이 false가 되버리면 오른쪽은 계산 시도조차 안한다.
	if(x==1&&y++==2){ }
	cout << y << endl;

	//De Morgan's Law: 아래 2개가 다르다
	//!(x && y) 는 ((!x) || (!y))와 같고 !(x || y) 는 ((!x) && (!y))와 같다
	cout << !(x && y) << endl;
	cout <<((!x) && (!y)) << endl;

	//XOR: C++에는 XOR연산자는 없다
	//XOR상황은 (x != y) 식으로 구현한다

	//Logical Operator의 우선순위: ||와 &&
	// ||와 &&중에서 &&가 순위가 높아서 먼저 계산됨
	cout << (true || false && false) << endl;
	cout << ((true || false) && false) << endl;

	//HW
	cout << ((true&&true)||false) << endl;//T
	cout << ((false && true) || false) << endl;//F
	cout << ((false && true) || false||true) << endl;//T
	cout << (((14>13) && (2>1)) || (9>1)) << endl;//T
	cout << !((2314123>2) || (123123>2387)) << endl;//F


	return 0;
}