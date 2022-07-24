#include <iostream>
#include <cmath>
#include <limits>

int main() {
	using namespace std;
	short s = 1;

	cout << sizeof(short) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;

	//pow: power
	//sizeof(short)*8���� 1�� ���� ����: �� ���� ��Ʈ�� ��ȣ ǥ�ø� ����� �ϱ� ����
	//pow()���� 1�� ���� ����: 0�� ǥ���ϴ� �� ����� �ϱ� ����
	cout << std::pow(2, sizeof(short) * 8-1) -1<< endl; //signed short�� ǥ���� �� �ִ� ���� ū ����

	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	//overflow
	s = 32767;
	s = s + 1;
	cout << s << endl;
	s = std::numeric_limits<short>::min();
	s = s - 1;
	cout << s << endl;

	//unsigned������ overflow
	unsigned int i = -1;//�����Ϸ��� -1�� �ڵ����� unsigned���·� �ٲ��ش�. �׷��� ������ ���ư� ����
	cout << i << endl;

	//����� 5�� ���´�. ���������� ���� ����� ������ �����Ϸ� ��� �����̴�.
	cout << 22 / 4 << endl;

	return 0;
}