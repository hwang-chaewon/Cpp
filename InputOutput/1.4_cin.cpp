#include <iostream>//cout, endl, cin, ...
#include <cstdio>//printf
int main() {
	//std::���� �� �����Ƽ�.
	using namespace std;

	cout << "abc" << '\t' << "oh~" << endl;
	cout << "ab" << '\t' << "oh~" << endl;

	//�Ҹ� ���
	cout << "\a";

	//�Է¹��� ���� ���
	int x;
	cin >> x;
	cout << "your input is " << x << endl;

	return 0;
}
