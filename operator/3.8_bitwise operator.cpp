#include <iostream>
#include <bitset>//이진수로 바꿔서 출력해주는 라이브러리

int main() {

	using namespace std;

	//내부적으로 정수가 어떻게 이진수로 바뀌어 저장되는지 보고 싶다면?
	unsigned int a = 3;
	unsigned int b = 1024;
	cout << std::bitset<4>(a) << "    a:" << a<<endl;//4비트로 보겠다는 것
	cout << std::bitset<12>(b) << "    b:" << b << endl;

	// << leftshift : n으로 shift할 때마다 2^n을 곱하는 효과
	cout << std::bitset<4>(a<<1) << "   " << (a << 1) << endl;
	cout << std::bitset<4>(a << 2) << "   " << (a << 2) << endl;
	cout << std::bitset<8>(a << 3) << "   " << (a << 3) << endl;
	// >> rightshift: n으로 shift할 때마다 2^n을 나누는 효과
	cout << std::bitset<12>(b >> 1) << "   " << (b >> 1) << endl;
	cout << std::bitset<12>(b >> 2) << "   " << (b >> 2) << endl;
	cout << std::bitset<12>(b >> 3) << "   " << (b >> 3) << endl;

	// ~ not
	cout << std::bitset<12>(~b) << "    ~b:" << (~b) << "    !b:" << (!b) << endl;

	unsigned int x = 0b1100; //이진수 1100
	unsigned int y = 0b0110;
	cout << "x: " << x << "    y: " << y << endl;
	// & AND
	cout <<"AND: " << std::bitset<4>(x & y) << endl;
	// | OR
	cout << "OR: " << std::bitset<4>(x | y) << endl;
	// ^ XOR
	cout << "XOR: " << std::bitset<4>(x ^ y) << endl;
	//assignment operator와 결합돼서도 사용 가능
	x &= y;

	return 0;
}