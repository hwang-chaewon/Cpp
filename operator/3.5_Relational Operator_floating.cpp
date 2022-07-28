#include <iostream>

int main() {
	using namespace std;

	//부동소수점의 대소비교는 문제가 될 수 있다
	double d1(100 - 99.99);
	double d2(10 - 9.99);

	cout << "d1: " <<d1<<" d2: "<<d2 << endl;
	if (d1 == d2)
		cout << "Equal" << endl;
	if (d1 != d2)
		cout << "NotEq" << endl;
	if (d1 < d2)
		cout << "d1 is less" << endl;
	if (d1 > d2)
		cout << "d1 is greater" << endl;
	//차이를 보니 아주 작은 차이가 난다. 이 차이 정도는 무시하고 싶다면 어떻게 해야 할까.
	cout << std::abs(d1-d2) << endl;

	//허용 오차 결정
	const double epsilon = 1e-10;
	if (std::abs(d1 - d2) < epsilon)
		cout << "Approx Eq" << endl;
	else
		cout << "NotEq" << endl;

	

	return 0;
}