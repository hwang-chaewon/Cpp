#include <iostream>
#include <bitset>//�������� �ٲ㼭 ������ִ� ���̺귯��

int main() {

	using namespace std;

	//���������� ������ ��� �������� �ٲ�� ����Ǵ��� ���� �ʹٸ�?
	unsigned int a = 3;
	unsigned int b = 1024;
	cout << std::bitset<4>(a) << "    a:" << a<<endl;//4��Ʈ�� ���ڴٴ� ��
	cout << std::bitset<12>(b) << "    b:" << b << endl;

	// << leftshift : n���� shift�� ������ 2^n�� ���ϴ� ȿ��
	cout << std::bitset<4>(a<<1) << "   " << (a << 1) << endl;
	cout << std::bitset<4>(a << 2) << "   " << (a << 2) << endl;
	cout << std::bitset<8>(a << 3) << "   " << (a << 3) << endl;
	// >> rightshift: n���� shift�� ������ 2^n�� ������ ȿ��
	cout << std::bitset<12>(b >> 1) << "   " << (b >> 1) << endl;
	cout << std::bitset<12>(b >> 2) << "   " << (b >> 2) << endl;
	cout << std::bitset<12>(b >> 3) << "   " << (b >> 3) << endl;

	// ~ not
	cout << std::bitset<12>(~b) << "    ~b:" << (~b) << "    !b:" << (!b) << endl;

	unsigned int x = 0b1100; //������ 1100
	unsigned int y = 0b0110;
	cout << "x: " << x << "    y: " << y << endl;
	// & AND
	cout <<"AND: " << std::bitset<4>(x & y) << endl;
	// | OR
	cout << "OR: " << std::bitset<4>(x | y) << endl;
	// ^ XOR
	cout << "XOR: " << std::bitset<4>(x ^ y) << endl;
	//assignment operator�� ���յż��� ��� ����
	x &= y;

	return 0;
}