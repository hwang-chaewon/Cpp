#include <iostream>//cout, endl, cin, ...
#include <cstdio>//printf
int main() {
	//std::쓰는 게 귀찮아서.
	using namespace std;

	cout << "abc" << '\t' << "oh~" << endl;
	cout << "ab" << '\t' << "oh~" << endl;

	//소리 출력
	cout << "\a";

	//입력받은 정수 출력
	int x;
	cin >> x;
	cout << "your input is " << x << endl;

	return 0;
}
