#include <iostream>
#include <typeinfo>

int main() {
	using namespace std;

	//typeid�� ������ ���ͷ��� ������ � ������ Ÿ������ �������
	cout << typeid(4.0).name() << endl;

	//numeric conversion
	int i = 300;
	char c = i;
	cout << c << endl;
	cout << static_cast<int>(c) << endl;
	//numeric conversion-unsigned
	cout << 5u - 10 << endl;//5u: unsigned 5��� ��

	return 0;
}