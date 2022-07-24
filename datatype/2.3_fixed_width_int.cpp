#include <iostream>

int main() {
	using namespace std;
	int16_t i(5);//16-bit
	int8_t myint = 65;

	cout << myint << endl;
	int_fast8_t fi(5); //integer 8-bit 중 가장 빠른 것
	int_least64_t fl(5); //적어도 64-bit크기인 데이터타입

	return 0;
}