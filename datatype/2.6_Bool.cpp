#include <iostream>

bool isEq(int a, int b) {
	bool result = (a == b);
	return result;
}

int main() {
	using namespace std;

	bool b1(true);

	cout << b1 << endl;
	cout << std::boolalpha;
	cout << b1 << endl;

	cout << std::noboolalpha;

	cout << "isEq result: " << isEq(2, 3) << endl;

	if (3.14)
		cout << "true" << endl;

	//bool 입력받기
	bool b;
	cout << std::boolalpha;
	cin >> b;
	cout << "Your bool input: " << b << endl;
	return 0;
}