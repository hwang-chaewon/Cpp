#include <iostream>

int main() {
	using namespace std;
	int16_t i(5);//16-bit
	int8_t myint = 65;

	cout << myint << endl;
	int_fast8_t fi(5); //integer 8-bit �� ���� ���� ��
	int_least64_t fl(5); //��� 64-bitũ���� ������Ÿ��

	return 0;
}