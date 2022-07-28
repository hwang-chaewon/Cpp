#include <iostream>

int main() {
	using namespace std;

	//�ε��Ҽ����� ��Һ񱳴� ������ �� �� �ִ�
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
	//���̸� ���� ���� ���� ���̰� ����. �� ���� ������ �����ϰ� �ʹٸ� ��� �ؾ� �ұ�.
	cout << std::abs(d1-d2) << endl;

	//��� ���� ����
	const double epsilon = 1e-10;
	if (std::abs(d1 - d2) < epsilon)
		cout << "Approx Eq" << endl;
	else
		cout << "NotEq" << endl;

	

	return 0;
}