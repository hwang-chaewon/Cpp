#include <iostream>

int main() {
	using namespace std;

	bool bVal = true;
	cout << (bVal ? 1 : 0) << endl;
	//bool���� ���������� ����(0�Ǵ� 1)�� ǥ���Ѵ�
	cout << bVal << endl;

	//���������� ���ڴ� ���ڷ� ǥ���Ѵ�. 
	char chVal = 'A';
	char chintVal = 65;
	cout << (int)chVal << endl;
	cout << chintVal << endl;

	//float�� �ڿ� f�� ���̰� double�� �ƹ��͵� ������ �ʴ´�
	//float���� 4����Ʈ�ۿ� �������� ���ϰ�, �׷��⿡ �Ҽ����� ©������ ���� �ִٴ� ����� ���� �̹� �˰� �����ϰ� �ִٴ� ������ �ϴ� �ǹ̷� f�� ���δ�.
	float fVal = 3.17487f;
	double dVal = 3.17487;

	auto aVal = 3.141592;
	auto aVal2 = 3.141592f;
	cout << sizeof(aVal) << endl;
	cout << sizeof(aVal2) << endl;

	return 0;
}