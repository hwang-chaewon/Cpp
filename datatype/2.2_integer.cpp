#include <iostream>
#include <cmath>
#include <limits>

int main() {
	using namespace std;
	short s = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	//pow: power
	//sizeof(short)*8에서 1을 빼는 이유: 맨 앞의 비트는 부호 표시를 해줘야 하기 때문
	//pow()에서 1을 빼는 이유: 0을 표현하는 건 뺴줘야 하기 때문
	cout << std::pow(2, sizeof(short) * 8-1) -1<< endl; //signed short가 표현할 수 있는 가장 큰 숫자

	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	//overflow
	s = 32767;
	s = s + 1;
	cout << s << endl;
	s = std::numeric_limits<short>::min();
	s = s - 1;
	cout << s << endl;

	//unsigned에서의 overflow
	unsigned int i = -1;//컴파일러가 -1을 자동으로 unsigned형태로 바꿔준다. 그런데 앞으로 돌아가 버림
	cout << i << endl;

	//결과로 5가 나온다. 정수끼리의 연산 결과는 정수로 저장하려 들기 때문이다.
	cout << 22 / 4 << endl;

	return 0;
}