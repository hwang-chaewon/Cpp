#include <iostream>

int main() {
	using namespace std;

	bool bVal = true;
	cout << (bVal ? 1 : 0) << endl;
	//bool또한 내부적으로 숫자(0또는 1)로 표현한다
	cout << bVal << endl;

	//내부적으로 문자는 숫자로 표현한다. 
	char chVal = 'A';
	char chintVal = 65;
	cout << (int)chVal << endl;
	cout << chintVal << endl;

	//float는 뒤에 f를 붙이고 double은 아무것도 붙이지 않는다
	//float에는 4바이트밖에 저장하지 못하고, 그렇기에 소수점이 짤려나갈 수도 있다는 사실을 내가 이미 알고 감수하고 있다는 서약을 하는 의미로 f를 붙인다.
	float fVal = 3.17487f;
	double dVal = 3.17487;

	auto aVal = 3.141592;
	auto aVal2 = 3.141592f;
	cout << sizeof(aVal) << endl;
	cout << sizeof(aVal2) << endl;

	return 0;
}
